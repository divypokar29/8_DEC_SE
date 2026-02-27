#include<iostream>
using namespace std;
class Bank
{
	private:
		int balance; // data member
		
	public:
		void deposite(int amount)
		{
			if(amount > 0)
			{
				balance = amount;
			}
		}
		
		int displayBalance()
		{
			return balance;
		}
};
main()
{
	Bank b = Bank();
	cout<<"\n Add Deposite";
	int amount;
	cout<<"\n\nEnter amount which you want to deposite : ";
	cin>>amount;
	
	b.deposite(amount);
	cout<<b.displayBalance();
}

/*
1) Data hiding 
2) Data prevent from outside world 
3) security - no one can directly change from outside the world 
4) data control - no one can add unwanted value or apply changes 

*/