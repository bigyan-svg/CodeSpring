//wap to sum the function overloading in C++ and must sum output of each function
// #include <iostream>
// using namespace std;
// class Overload
// {
// public:
//     void sum(int a,int b)
//     {
//         cout << "The sum of a and b is: " << a + b << endl;
//     }
//     void sum(int a, double b) //function overloading
//     {
//         cout << "The sum of a and b is: " << a + b << endl;
//     }
//     void sum(int a, double b, double c) //function overloading
//     {
//         cout << "The sum of a, b and cis: " << a + b + c << endl;
//     }
// };
// int main()
// {
//     Overload o1;
//     o1.sum(5,5);         // calls the first function
//     o1.sum(5,5.5);       // calls the second function
//     o1.sum(5,10.0,5.5);    // calls the third function
//     return 0;
// }
//write a simple program to show the operator for + operator which is used to add two numbers as well as two strings in C++
// #include <iostream>
// #include <string>
// using namespace std;
// class Overload
// {
// public:
//     int sum(int a, int b)
//     {
//         return a + b;
//     }
//     string sum(string a, string b) //function overloading
//     {
//         return a + b;
//     }
// };
// int main()
// {
//     Overload o1;
//     cout << "The sum of 5 and 5 is: " << o1.sum(5, 5) << endl; // calls the first function
//     cout << "The concatenated string is: " << o1.sum("Hello ", "World") << endl; // calls the second function
//     return 0;
// }