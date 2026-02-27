#include<iostream>
using namespace std;
class Math
{
	public:
		int num1,num2;
		
		void di(int a,int b)
		{
			num1=a+b;
			cout<<num1<<endl;
		}
		void di(int a,int b,int c)
		{
			num2=a+b+c;
			cout<<num2<<endl;
		}
		double di(double a,double b)
		{
			cout<<a+b<<endl;
		}
};
main()
{
	Math s=Math();
	
	s.di(6,7);
	s.di(5,5,5);
	s.di(25.57,77.45);
}