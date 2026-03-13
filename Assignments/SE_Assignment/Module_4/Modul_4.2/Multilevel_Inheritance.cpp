#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
};

class Test : public Student
{
public:
    int m1,m2;
};

class Result : public Test
{
public:
    int total;

    void input()
    {
        cout<<"Enter Roll No: ";
        cin>>roll;

        cout<<"Enter Marks1 and Marks2: ";
        cin>>m1>>m2;
    }

    void display()
    {
        total = m1+m2;

        cout<<"Roll No: "<<roll<<endl;
        cout<<"Total Marks: "<<total<<endl;
    }
};

int main()
{
    Result r;

    r.input();
    r.display();

}