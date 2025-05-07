#include <iostream>
using namespace std;
class Rational
{
  private:
      int num;
      int den;
  public:
      Rational(int n=0,int d=1)
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
          cout<<"sum = "<<num<<"/"<<den<<endl;
      }
     friend Rational add(Rational r1, Rational r2);
};
Rational add(Rational r1, Rational r2)
{
  Rational r;
  r.num = r1.num*r2.den+r1.den*r2.num;
  r.den = r1.den*r2.den;
  return r;
}
int main() 
{
  Rational r1,r2,result;
  cout<<"enter the first number: "<<endl;
  r1.input();
  cout<<"Enter the second number"<<endl;
  r2.input();
  result = add(r1, r2);
  result.display();
  return 0;
}