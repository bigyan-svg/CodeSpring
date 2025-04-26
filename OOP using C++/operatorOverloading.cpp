// write a simple program to show the operator for + operator which is used to add two numbers as well as two strings in C++
#include <iostream>
#include <string>
using namespace std;
class Overload
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    string sum(string a, string b) //function overloading
    {
        return a + b;
    }
};
int main()
{
    Overload o1;
    cout << "The sum of 5 and 5 is: " << o1.sum(5, 5) << endl; // calls the first function
    cout << "The concatenated string is: " << o1.sum("Hello ", "World") << endl; // calls the second function
    return 0;
}