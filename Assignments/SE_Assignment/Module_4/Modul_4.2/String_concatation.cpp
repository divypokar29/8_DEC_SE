#include<iostream>
#include<string.h>
using namespace std;

class String
{
    char str[100];

public:

    void input()
    {
        cin>>str;
    }

    void display()
    {
        cout<<str;
    }

    String operator+(String s)
    {
        String temp;
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
        return temp;
    }
};

int main()
{
    String s1,s2,s3;

    cout<<"Enter first string: ";
    s1.input();

    cout<<"Enter second string: ";
    s2.input();

    s3 = s1 + s2;

    cout<<"Concatenated string: ";
    s3.display();

  
}