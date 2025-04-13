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
 #include<iostream>
    using namespace std;
    int glo = 6; //global variable
    void sum();
    int main()
    {
        int glo = 9; //local variable
        cout << "this is tutorial 5. here the value of glo is " << glo;
        cout << "\nThe value of glo in the function is " << ::glo; //using scope resolution operator to access global variable glo
        sum();
        return 0;
    }
    void sum()
    {
        cout << "\nThe sum of glo and 5 is " << glo + 5; //using scope resolution operator to access global variable glo
    } 