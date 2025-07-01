#include<iostream>
#include<cmath>
using namespace std;
class Polar
{
    private:
        float radius;
        float angle;
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
};
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
            cout<<"X coordinate = "<<x<<endl;
            cout<<"Y coordinate = "<<y<<endl;
        }
        operator Polar()
        {
            float radii, angl;
            radii = sqrt(x*x+y*y);
            angl = atan(y/x);
            Polar pol(radii, angl);
            return pol;
        }
};
int main()
{
    Rectangle r(3,4);
    Polar p;
    p = r;
    r.display();
    p.display();
    return 0;

}