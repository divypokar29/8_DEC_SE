#include<iostream>
using namespace std;
class Bank
{
	private:
		int balence;
		
		public:
			void deposite(int a)
			{
				if(a>0)
				{
					balence=a;
				}
			}
		    int display()
		    {
		    	return balence;
			}
};
main()
{
	
	Bank b=Bank();
	int amount;
	cout<<"entre a deposite amount :";
	cin>>amount;
	
	b.deposite(amount);
	cout<<"\n";
	cout<<b.display()<<endl;
}