//program to demonstrate constructor
#include<iostream>
#include<string>
using namespace std;
class Demo
{
    private:
        int x;
        int y;
    public:
        Demo(); //constructor
        void show_data();
};
Demo::Demo() //constructor definition
{
    x=10;
    y=20;
}
void Demo:: show_data()
{
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}
int main()
{
    Demo d1; //creating object of class Demo
    d1.show_data(); //calling member function show_data() using object d1
    return 0;
}

