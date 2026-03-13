#include<iostream>
using namespace std;

class Math
{
public:

    int calc(int a,int b)
    {
        return a+b;
    }

    float calc(float a,float b)
    {
        return a-b;
    }

    double calc(double a,double b,double c)
    {
        return a*b*c;
    }
};

int main()
{
    Math m;

    cout<<"Addition = "<<m.calc(5,3)<<endl;
    cout<<"Subtraction = "<<m.calc(5.5f,2.5f)<<endl;
    cout<<"Multiplication = "<<m.calc(2.0,3.0,4.0)<<endl;

    
}