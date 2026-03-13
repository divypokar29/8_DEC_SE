#include<iostream>
using namespace std;

class Swap
{
    int a,b;

public:

    void input()
    {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }

    void display()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }

    friend void swapNum(Swap &s);
};

void swapNum(Swap &s)
{
    s.a = s.a + s.b;
    s.b = s.a - s.b;
    s.a = s.a - s.b;
}

int main()
{
    Swap s;

    s.input();

    cout<<"Before Swap\n";
    s.display();

    swapNum(s);

    cout<<"After Swap\n";
    s.display();

   
}