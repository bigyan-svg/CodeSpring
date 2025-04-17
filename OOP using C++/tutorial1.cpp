//program to print hello wolrd using C++
//  #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "Hello, World!" ;
//     return 0;
// }

//program to demonstrate the use of variables in C++
//  #include<iostream>
//     using namespace std;
//     int main()
//     {
//         int a =4, b=5;
//         double pi =3.14;
//         cout << "this is tutorial 4. here the value of a is " << a << " and the value of b is " << b;
//         cout << "\nand the value of pi is " << pi;
//         return 0;
//     }

//Program to demonstraate the local and global variables in C++ using functions prototype
//  #include<iostream>
//     using namespace std;
//     int glo = 6; //global variable
//     void sum();
//     int main()
//     {
//         int glo = 9; //local variable
//         cout << "this is tutorial 5. here the value of glo is " << glo;
//         cout << "\nThe value of glo in the function is " << ::glo; //using scope resolution operator to access global variable glo
//         sum();
//         return 0;
//     }
//     void sum()
//     {
//         cout << "\nThe sum of glo and 5 is " << glo + 5; //using scope resolution operator to access global variable glo
//     }

//Basic input/output and more in C++
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1, num2;
//     cout << "Enter the value of num1:" <<  endl << endl;
//     cin >> num1; //taking input from user
//     cout << "Enter the value of num2:" <<  endl << endl;
//     cin >> num2; //taking input from user
//     cout << "The sum of "<<num1<<" and "<<num2<<" is:" << num1 + num2; //printing the sum of num1 and num2
//     return 0;
// }

//C++ Header files and operators
// #include<iostream> //this is system header file
// #include"this.h"  //this is user defined header file
// using namespace std;
// int main()
// {
//     int a = 4, b = 5;
//     cout<< "operators in C++"<< endl;
//     cout << "following are the operatos in C++ " << endl;
//     cout << "1. Arithmetic operators" <<  endl << endl;
//     cout << "The value of a+b is " << a + b <<  endl; //addition operator
//     cout << "The value of a-b is " << a - b <<  endl; //subtraction operator
//     cout << "The value of a*b is " << a * b <<  endl; //multiplication operator
//     cout << "The value of a/b is " << a / b <<  endl; //division operator
//     cout << "The value of a%b is " << a % b <<  endl; //modulus operator
//     cout << "The value of a++ is " << a++ <<  endl; //increment operator
//     cout << "The value of a-- is " << a-- <<  endl; //decrement operator
//     cout << "The value of ++a is " << ++a <<  endl; //increment operator
//     cout << "The value of --a is " << --a <<  endl <<endl; //decrement operator
//     cout << "2. Assignment operators" <<  endl << endl; //used to assign value to a variable
//     cout << "The value of a=b is " << (a = b) <<  endl; //assignment operator
//     cout << "The value of a+=b is " << (a += b) <<  endl; //addition assignment operator
//     cout << "The value of a-=b is " << (a -= b) <<  endl << endl; //subtraction assignment operator
//     cout << "3. Comparison operators" <<  endl << endl; //used to compare two values
//     cout << "The value of a==b is " << (a == b) <<  endl; //equal to operator
//     cout << "The value of a!=b is " << (a != b) <<  endl; //not equal to operator
//     cout << "The value of a>b is " << (a > b) <<  endl; //greater than operator
//     cout << "The value of a<b is " << (a < b) <<  endl; //less than operator
//     cout << "The value of a>=b is " << (a >= b) <<  endl; //greater than or equal to operator
//     cout << "The value of a<=b is " << (a <= b) <<  endl << endl; //less than or equal to operator
//     cout << "4. Logical operators" <<  endl << endl; //used to perform logical operations
//     cout << "The value of a&&b is " << (a && b) <<  endl; //logical AND operator
//     cout << "The value of a||b is " << (a || b) <<  endl; //logical OR operator
//     cout << "The value of !a is " << (!a) <<  endl <<endl; //logical NOT operator
//     cout << "5. Bitwise operators" <<  endl << endl; //used to perform bitwise operations
//     cout << "The value of a&b is " << (a & b) <<  endl; //bitwise AND operator
//     cout << "The value of a|b is " << (a | b) <<  endl; //bitwise OR operator
//     cout << "The value of a^b is " << (a ^ b) <<  endl; //bitwise XOR operator
//     cout << "The value of ~a is " << (~a) <<  endl; //bitwise NOT operator
//     cout << "The value of a<<b is " << (a << b) <<  endl; //left shift operator
//     cout << "The value of a>>b is " << (a >> b) <<  endl <<endl; //right shift operator
//     cout << "6. Conditional operator" <<  endl << endl; //used to perform conditional operations
//     cout << "The value of (a>b)?a:b is " << ((a > b) ? a : b) <<  endl <<endl; //conditional operator
//     cout << "7. sizeof operator" <<  endl << endl; //used to find the size of a variable
//     cout << "The size of a is " << sizeof(a) <<  endl; //size of operator
//     cout << "The size of b is " << sizeof(b) <<  endl; //size of operator
//     return 0;
// }

