#include<iostream>
using namespace std;
class Parent {
	public:
		int a= 101; // member declatation
};
class Child : public Parent{
	public:
		void display(){
			cout<<"\n a = "<<a;
			
		}
};
int main(){
	Child obj;
	obj.display();
	obj.a = 201;
	
	cout<<"\n after changes a = "<<obj.a;
}