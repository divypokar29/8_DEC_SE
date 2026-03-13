#include<iostream>
using namespace std;

class Array
{
    int a[5];

public:

    void input()
    {
        for(int i=0;i<5;i++)
            cin>>a[i];
    }

    void display()
    {
        for(int i=0;i<5;i++)
            cout<<a[i]<<" ";
    }

    Array operator+(Array x)
    {
        Array temp;

        for(int i=0;i<5;i++)
            temp.a[i]=a[i]+x.a[i];

        return temp;
    }
};

int main()
{
    Array a1,a2,a3;

    cout<<"Enter first array\n";
    a1.input();

    cout<<"Enter second array\n";
    a2.input();

    a3 = a1 + a2;

    cout<<"Addition array\n";
    a3.display();

    
}