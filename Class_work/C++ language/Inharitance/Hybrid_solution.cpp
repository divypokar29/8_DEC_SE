
#include<iostream>
using namespace std;
class A {
	public:
     int marks = 100;

    void hello(){
        cout<<"\n hello";
    }
};
class B :virtual public A{
	public:
    void displayB(){
        cout<<"\n marks : "<<marks;
    }
};
class C : virtual public A{
	public:
     void displayC(){
        cout<<"\n marks : "<<marks;
    }
};
class D :public B ,public C
{

};
int main(){
	D obj;

	
    obj.displayB();
    obj.displayC();


 obj.hello();
    // obj.A::hello();

}