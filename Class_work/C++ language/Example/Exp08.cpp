// example of a ambigity
#include<iostream>
using namespace std;

class A
{
	public:
    void display(){
        cout<<"\n this is A a method ";

    }
};
class B 
{
	public:
    void display(){
        cout<<"\n this is B a method ";
    }
};

class C : public A , public B
{
	public:
void mymethod(){
        cout<<"\n hello";
    }
};

int main(){
    C obj;
    obj.mymethod();
    //obj.display();
}