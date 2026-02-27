#include<iostream>
using namespace std;
class Parent
{
	public:
		void display()
		{
			cout<<"this is parent class"<<endl;
		}
};
class Child: public Parent
{
	public:
		void display()
		{
			Parent::display();//isse parent vala bhi isme aa jaye ga
			cout<<"this is child class"<<endl;
		}
};
main()
{
	Child obj=Child();
	
	obj.display();
	//obj.Parent::display();agar ye likhenge to bus ek janka hi aye ga
}