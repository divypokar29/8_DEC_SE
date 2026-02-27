#include<iostream>
using namespace std;
class Bank
{
	public:
		int balance; // data member
};
main()
{
	Bank b = Bank();
	b.balance = -20000;
	cout<<"\n balance = "<<b.balance;	
}

/*
-> there is no data control - we can access from any where 
-> there is no security - it is not safe for any kind data 
solution : use here encapsulation concept 
*/