// wap to sum the function overloading in C++ and must sum output of each function
#include <iostream>
using namespace std;
class Overload
{
public:
    void sum(int a,int b)
    {
        cout << "The sum of a and b is: " << a + b << endl;
    }
    void sum(int a, double b) //function overloading
    {
        cout << "The sum of a and b is: " << a + b << endl;
    }
    void sum(int a, double b, double c) //function overloading
    {
        cout << "The sum of a, b and cis: " << a + b + c << endl;
    }
};
int main()
{
    Overload o1;
    o1.sum(5,5);         // calls the first function
    o1.sum(5,5.5);       // calls the second function
    o1.sum(5,10.0,5.5);    // calls the third function
    return 0;
}
