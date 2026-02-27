#include<iostream>
using namespace std;

class Address
{
	public:
		string city;
		string state;
		int pincode;
		
		Address(string city,string state,int pincode)
		{
			this->city = city;
			this->state = state;
			this->pincode = pincode;
		}
};
class Student 
{
	public:
		string name;
		Address* address; // referance of address class
		
		Student(string name,Address* address)
		{
			this->name = name;
			this->address = address;
		}
		
		void display(){
			cout<<"\n name : "<<name;
			cout<<"\n city : "<<address->city;
			cout<<"\n state : "<<address->state;
			cout<<"\n pincode : "<<address->pincode;
		}
};
main(){
	Address address("ahemdabad","gujrat",301235);
	Student std("Divy",&address);
	
	
	std.display();
}