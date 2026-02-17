#include<iostream>
using namespace std;
class Student
{
	public://public mode
     int id;
     string name;

     Student(){
        cout<<"\n wlcome to strudent portal";
        id = 10;
        name="aaaa";	 
     }
     void output(){
        cout<<"\n Id : "<<id;
        cout<<"\n Nmae : "<<name;
     }
	   
	   
};

int main(){
	Student obj;
	obj.output();
}
