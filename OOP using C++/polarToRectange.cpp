#include<iostream>
#include<cmath>
using namespace std;
class Rectangle
{
    private:
        float x;
        float y;
    public:
        Rectangle()
        {
        }
        Rectangle(float a, float b)
        {
            x = a;
            y = b;
        }
        void display()
        {
            cout<<"x coordinate = "<<x<<endl;
            cout<<"y coordinate = "<<y<<endl;
        }
};
class Polar
{
    private:
        float angle;
        float radius;
    public:
        Polar()
        {
        }
        Polar(float rad, float ang)
        {
            radius = rad;
            angle = ang;
        }
        void display()
        {
            cout<<"Radius = "<<radius<<endl;
            cout<<"Angle = "<<angle<<endl;
        }
        operator Rectangle()
        {
            float abissicca, ordinate;
            abissicca = radius*cos(angle);
            ordinate = radius*sin(angle);
            Rectangle Rect(abissicca, ordinate);
            return Rect;
        }
};
int main()
{
    Polar p(5,0.5);
    Rectangle r;
    r = p;
    p.display();
    r.display();
    return 0;

}