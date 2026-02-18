#include<iostream>
using namespace std;
class A {
	public:
    int num1;
		void input(){
            cout<<"Enter number 1 =";
            cin>>num1;
        }
};
class B : public A{
	public:
    int num2;
		void input2(){
			cout<<"\n Enter number 2 = ";
			cin>>num2;
			
		}
};
class C : public B{
	public:
    int ans ;
		void display(){
            ans = num1 + num2;
			cout<<"\n Anser = "<<ans;
			
		}
};
int main(){
	C obj;
	obj.input();
	obj.input2();
	obj.display();
	
}