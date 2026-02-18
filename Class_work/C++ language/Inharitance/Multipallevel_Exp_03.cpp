#include<iostream>
using namespace std;
class A {
	public:
    int a;
		void input(){
            cout<<"Enter number a =";
            cin>>a;
        }
};
class B {
	public:
    int b;
		void input2(){
			cout<<"\n Enter number b = ";
			cin>>b;
		}
};
class C : public A,public B{
	public:
    int ans ;
		void display(){
            ans = a + b;
			cout<<"\n Anser = "<<ans;
			
		}
};
int main(){
	C obj;
	obj.input();
	obj.input2();
	obj.display();
	
}