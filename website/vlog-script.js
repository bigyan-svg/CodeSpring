// Newsletter form submission (shows a simple alert)
document.addEventListener('DOMContentLoaded', function () {
  const form = document.querySelector('.newsletter form');
  if (form) {
    form.addEventListener('submit', function (e) {
      e.preventDefault();
      const email = form.querySelector('input[type="email"]').value;
      if (email) {
        alert(`Thank you for subscribing, ${email}!`);
        form.reset();
      }
    });
  }
});

// Example: Highlight navigation on scroll (optional)
window.addEventListener('scroll', function () {
  const header = document.querySelector('header');
  if (window.scrollY > 50) {
    header.style.boxShadow = '0 4px 16px rgba(90,24,154,0.12)';
  } else {
    header.style.boxShadow = '0 2px 8px rgba(0,0,0,0.04)';
  }
});