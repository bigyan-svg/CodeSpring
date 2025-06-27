#include<iostream>
using namespace std;
class Time
{
    private:
        int hr;
        int min;
        
    public:
        Time(int t)
        {
            hr = t/60;
            min = t%60;
        }
        void display()
        {
            cout<<hr<<"h "<<min<<"min"<<endl;
        }
};
int main()
{
    int time;
    cout<<"Enter time in minutes: ";
    cin>>time;
    Time T1 = time;
    T1.display();
    return 0;
}