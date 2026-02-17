#include<iostream>
using namespace std;
class Student
{
	public://public mode
     int id;
     string name;

     Student(int idValue,string nameValue ){
     
        id =idValue;
        name=nameValue;
     }
     void output(){
        cout<<"\n Id : "<<id;
        cout<<"\n Nmae : "<<name;
     }
	   
	   
};

int main(){
    
	Student obj(50,"dsffdsd");
	obj.output();
}
