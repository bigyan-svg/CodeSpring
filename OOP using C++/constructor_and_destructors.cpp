#include<iostream>
using namespace std;

class Rational
{
    private:
        static int count;
    public:
        Rational();
        ~Rational();
};

// Define and initialize the static member variable
int Rational::count = 0;

Rational::Rational()
{
    count++;
    cout << "Object " << count << " is created." << endl;
}

Rational::~Rational()
{
    cout << "Object " << count << " is destroyed" << endl;
    count--;
}

int main()
{
    Rational R1;
    {
        Rational R2, R3, R4;
    }
    return 0;
}