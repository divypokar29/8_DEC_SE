#include<iostream>
using namespace std;
class Math
{
	public:
		void addition(int num1,int num2)
		{
			cout<<num1+num2<<endl;
		}
		void addition(int num1,int num2,int num3)
		{
			cout<<num1+num2+num3<<endl;
		}	
		double addition(double num1,double num2)
		{
			cout<<num1+num2<<endl;
		}	
};
main()
{
	Math math = Math();
	math.addition(10,20);
	math.addition(5,6,9);
	math.addition(25.5,65.5);
}