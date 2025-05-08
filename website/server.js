const express = require('express');
const mongoose = require('mongoose');
const session = require('express-session');
const MongoStore = require('connect-mongo');
const bcrypt = require('bcryptjs');
const bodyParser = require('body-parser');
const path = require('path');

const app = express();

mongoose.connect('mongodb://localhost:27017/vlog', { useNewUrlParser: true, useUnifiedTopology: true });

const Article = mongoose.model('Article', new mongoose.Schema({
  title: String,
  content: String,
  date: { type: Date, default: Date.now }
}));

const User = mongoose.model('User', new mongoose.Schema({
  username: String,
  password: String
}));

app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));
app.use(express.static(path.join(__dirname, 'public')));
app.use(bodyParser.urlencoded({ extended: false }));

app.use(session({
  secret: 'yourSecretKey',
  resave: false,
  saveUninitialized: false,
  store: MongoStore.create({ mongoUrl: 'mongodb://localhost:27017/vlog' })
}));

function requireLogin(req, res, next) {
  if (!req.session.userId) return res.redirect('/login');
  next();
}

app.get('/', async (req, res) => {
  const articles = await Article.find().sort({ date: -1 });
  res.render('index', { articles });
});

app.get('/login', (req, res) => res.render('login'));
app.post('/login', async (req, res) => {
  const user = await User.findOne({ username: req.body.username });
  if (user && await bcrypt.compare(req.body.password, user.password)) {
    req.session.userId = user._id;
    res.redirect('/dashboard');
  } else {
    res.render('login', { error: 'Invalid credentials' });
  }
});

app.get('/dashboard', requireLogin, async (req, res) => {
  const articles = await Article.find().sort({ date: -1 });
  res.render('dashboard', { articles });
});

app.get('/edit', requireLogin, (req, res) => res.render('edit', { article: {} }));

app.get('/edit/:id', requireLogin, async (req, res) => {
  const article = await Article.findById(req.params.id);
  res.render('edit', { article });
});

// Create new article
app.post('/edit', requireLogin, async (req, res) => {
  await Article.create({ title: req.body.title, content: req.body.content });
  res.redirect('/dashboard');
});

// Update existing article
app.post('/edit/:id', requireLogin, async (req, res) => {
  await Article.findByIdAndUpdate(req.params.id, { title: req.body.title, content: req.body.content });
  res.redirect('/dashboard');
});

app.post('/delete/:id', requireLogin, async (req, res) => {
  await Article.findByIdAndDelete(req.params.id);
  res.redirect('/dashboard');
});

app.get('/logout', (req, res) => {
  req.session.destroy(() => res.redirect('/'));
});

// Create admin user (run once, then remove or comment out)
app.get('/create-admin', async (req, res) => {
  const hash = await bcrypt.hash('adminpassword', 10);
  await User.create({ username: 'admin', password: hash });
  res.send('Admin created');
});

app.listen(3000, () => console.log('Server running on http://localhost:3000'));