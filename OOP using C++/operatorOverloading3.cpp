// WAP to overload (+) operator to add two times(hr, min) t3 = t1+t using member function
#include<iostream>
using namespace std;
class Time
{
    public:
        int hr;
        int min;
    public:
        Time(int h = 0, int m = 0)
        {
            hr = h;
            min = m;
        }
        Time operator +(Time &obj)
        {
            Time temp;
            temp.min = min + obj.min;
            temp.hr = hr + obj.hr + temp.min / 60;
            temp.min = temp.min % 60;
            return temp;
        }
        void display()
        {
            cout << "Time is: " << hr << " hours and " << min << " minutes" << endl;
        }

};
int main()
{
    Time t1(2, 30), t2(1, 45);
    Time t3 = t1 + t2;
    t3.display();
    return 0;
}