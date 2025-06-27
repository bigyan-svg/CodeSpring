//WAP to overload binary operator (+) and (-) and showing the statement c3 = c1+c2, c3 = c1-c2

#include <iostream>
using namespace std;

class Complex 
{
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator + (Complex& obj) 
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    // Overload - operator
    Complex operator - (Complex& obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }

    // Display function
    void display() {
        cout<<"The complex number is: " << real << " + " << imag << "i" << endl;
    }
};

// Main function
int main() 
{
    Complex c1(4, 6);
    Complex c2(2, 1);
    Complex c3;

    // Addition
    c3 = c1 + c2;
    c3.display();

    // Subtraction
    c3 = c1 - c2;
    c3.display();

    return 0;
}
