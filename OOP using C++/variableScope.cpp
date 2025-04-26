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