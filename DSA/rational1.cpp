#include<iostream>
using namespace std;
class Rational
{
private:
    int num;
    int den;
public:
    void input();
    void display();
    Rational add(Rational r);
};
void Rational::input()
{
    cout <<"Enter numerator and denominator: "<<endl;
    cin >> num >> den;
}
void Rational:: display()
{
    cout << "The rational number is:" << num << "/" << den << endl;
}
Rational Rational:: add(Rational r)
{
    Rational temp;
    temp.num = (num * r.den) + (den * r.num);
    temp.den = den * r.den;
    return temp;
}
int main()
{
    Rational r1, r2, r3;
    r1.input();
    r2.input();
    r3 = r1.add(r2);
    r3.display();
    return 0;
}
