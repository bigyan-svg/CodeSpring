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
            cout<<"X coordinate = "<<x<<endl;
            cout<<"Y coordinate = "<<y<<endl;
        }
        float getx()
        {
            return x;
        }
        float gety()
        {
            return y;
        }
};
class Polar
{
private:
    float radius;
    float angle;
public:
    Polar()
    {
    }
    Polar(Rectangle rect)
    {
        radius = sqrt(rect.getx()*rect.getx()+ rect.gety()*rect.gety());
        angle = atan(rect.gety()/rect.getx());
    }
    void display()
    {
        cout<<"Radius = "<<radius<<endl;
        cout<<"Angle = "<<angle<<endl;
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