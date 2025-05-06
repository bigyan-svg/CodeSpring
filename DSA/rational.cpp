#include<iostream>
using namespace std;
class Rational
{
    private:
    int num;
    int den;
    public:
    Rational(int n=0, int d=1)
    {
        num = n;
        den = d;
    }
    void input()
    {
        cout << "Enter numerator and denominator: ";
        cin >> num >> den;
    }
    void display()
    {
        cout << num << "/" << den << endl;
    }
    Rational add(Rational r)
    {
        Rational number;
        number.num= num*r.den+ den*r.num;
        number.den= den*r.den;
        return number;
    }
};
int main()
{
    Rational r1, r2, result;
    cout << "Enter first rational number:" << endl;
    r1.input();
    cout << "Enter second rational number:" << endl;
    r2.input();
    result = r1.add(r2);
    cout << "Sum of the two rational numbers is: ";
    result.display();
    return 0;
}