#include<iostream>
using namespace std;

inline int multiply(int a,int b)
{
    return a*b;
}

inline int cube(int x)
{
    return x*x*x;
}

int main()
{
    int a,b;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Multiplication = "<<multiply(a,b)<<endl;
    cout<<"Cube of "<<a<<" = "<<cube(a)<<endl;


}