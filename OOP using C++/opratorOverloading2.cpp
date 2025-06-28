#include <iostream>
using namespace std;

class Height {
private:
    int feet;
    int inches;

public:
    Height(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    Height& operator += ( Height& obj) 
    {
        inches += obj.inches;
        feet += obj.feet + (inches / 12); // Convert inches to feet
        inches %= 12; // Keep inches in 0–11
        return *this; // Return the current object
    }

    void display() 
    {
        cout << "Height after addition: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Height h1(5, 8); // 5 feet 8 inches
    Height h2(3, 6); // 3 feet 6 inches

    h1 += h2; // Use overloaded += operator

    h1.display(); // Correct way to access private data

    return 0;
}
