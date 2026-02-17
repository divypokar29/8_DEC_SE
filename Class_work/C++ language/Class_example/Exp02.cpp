#include<iostream>
using namespace std;
class Student
{
	public://public mode
     int id;
     string name;

     void input ()
     {
        cout<<"Enter id : ";
        cin>>id;
        cout<<"Enter name :";
        cin>>name;
     }

     void output(){
        cout<<"\n Id : "<<id;
        cout<<"\n Nmae : "<<name;
     }
	   
	   
};

int main(){
	Student obj =Student();

    obj.input();
    obj.output();
}
