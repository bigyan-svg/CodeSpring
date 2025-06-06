//wap to display the sum of two rational number in the form of p/q
//where p and q are integers
#include <iostream>
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
        cout << "Enter numerator: ";
        cin >> num;
        cout << "Enter denominator: ";
        cin >> den;
        if (den == 0)
        {
            cout << "Denominator cannot be zero. Setting it to 1." << endl;
            den = 1;
        }
    }
    void display()
    {
        cout << num << "/" << den << endl;
    }
    Rational add(Rational r)
    {
        Rational temp;
        temp.num = (num * r.den) + (den * r.num);
        temp.den = den * r.den;
        return temp;
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
