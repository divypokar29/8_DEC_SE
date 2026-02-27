#include<iostream>
using namespace std;
class Bank
{
	public:
		int balance;
};
main()
{
	Bank b=Bank();
	b.balance=-200;
	cout<<"balnse="<<b.balance;
}
/*
output:
balnse=-200

-> ther is no security it is not safe for any kind data
-> use hear encapsulation
*/