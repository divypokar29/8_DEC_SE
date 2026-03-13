#include<iostream>
using namespace std;

class Cricketer
{
public:
    string name;
};

class Batsman : public Cricketer
{
    int totalruns;
    int innings;
    float avg;

public:

    void input()
    {
        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Total Runs: ";
        cin>>totalruns;

        cout<<"Enter Innings: ";
        cin>>innings;
    }

    void average()
    {
        avg = totalruns/innings;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Average Runs: "<<avg<<endl;
    }
};

int main()
{
    Batsman b;

    b.input();
    b.average();
    b.display();


}