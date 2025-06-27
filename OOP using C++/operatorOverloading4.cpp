// WAP to overload (+) operator to add two times(hr, min) t3 = t1+t using friend function
#include<iostream>
using namespace std;
class Time
{
    private:
        int hr;
        int min;
    public:
        Time(int h = 0, int m = 0)
        {
            hr = h;
            min = m;
        }
        void display()
        {
            cout << "Time is: " << hr << " hours and " << min << " minutes" << endl;
        }
        friend Time operator +(Time &t1, Time &t2);
};
Time operator +( Time &t1, Time &t2)
{
    Time temp;
    temp.min = t1.min + t2.min;
    temp.hr = t1.hr + t2.hr + temp.min / 60;
    temp.min = temp.min % 60;
    return temp;
}
int main()
{
    Time t1(2, 30), t2(1, 45);
    Time t3 = t1 + t2;
    t3.display();
    return 0;
}
