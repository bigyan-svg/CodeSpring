#include<iostream>
using namespace std;
class Rational
{
    private:
        int num;
        int dnum;
    public:
        void input();
        void display();
        Rational Sum(Rational r);
};
void Rational:: input()
{
    cout<<"Enter numerator and denominator"<<endl;
    cin>>num>>dnum;
}
void Rational:: display()
{
    cout<<"Sum = "<<num<<"/"<<dnum<<endl;
}
Rational Rational::Sum(Rational r)
{
    Rational temp;
    temp.num = num*r.dnum+dnum*r.num;
    temp.dnum = dnum*r.dnum;
    return temp;
}
int main()
{
    Rational R1,R2,R3;
    R1.input();
    R2.input();
    R3 = R1.Sum(R2);
    R3.display();
    return 0;
}