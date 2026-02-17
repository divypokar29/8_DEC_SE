#include<iostream>
using namespace std;
class Sample // class is a keyword and sample is a classname
{
	public://public mode
	
	   int a ;
	   string name;
	   
	   
};

int main(){
	//object creation
	
	Sample obj =Sample();
	obj.a=10;
	obj.name="divy";
	
	cout<<"\n a= "<<obj.a;
	cout<<"\n name = "<<obj.name;
}
