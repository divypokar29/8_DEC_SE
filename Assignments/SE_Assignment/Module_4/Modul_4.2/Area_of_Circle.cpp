#include<iostream>
using namespace std;

class Area
{
public:

    float area(float r)          // Circle
    {
        return 3.14 * r * r;
    }

    int area(int l, int b)       // Rectangle
    {
        return l * b;
    }

    float area(float b, float h) // Triangle
    {
        return 0.5 * b * h;
    }
};

int main()
{
    Area a;

    cout<<"Area of Circle = "<<a.area(5.0)<<endl;
    cout<<"Area of Rectangle = "<<a.area(4,6)<<endl;
    cout<<"Area of Triangle = "<<a.area(5.0f,4.0f)<<endl;

   
}