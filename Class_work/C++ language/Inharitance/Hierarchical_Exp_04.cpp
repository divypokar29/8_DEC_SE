#include<iostream>
using namespace std;
class A {
	public:
     int num1,num2;

     void input(){
        cout<<"\n Enter number 1 : ";
        cin>>num1;
        cout<<"\n Enter number 2 : ";
        cin>>num2;
     }
     void display(){
        cout<<"\n number 1 :"<<num1;
        cout<<"\n number 2 :"<<num2;
        
     }
};
class B : public A{
	public:
    int ans;
		void add(){
            ans = num1 + num2;
			cout<<"\n Addision is  = "<<ans;
			
		}
};
class C : public A{
	public:
     int ans;
		void multi(){
            ans = num1 * num2;
			cout<<"\n Multiplaction is  = "<<ans;
			
		}
};
int main(){
	B objB;
    C objC;
	
    objB.input();
    objB.display();
    objB.add();

    cout<<"\n\n This is a multiplaction \n\n";

    objC.input();
    objC.display();
    objC.multi();
	
}