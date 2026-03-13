#include<iostream>
using namespace std;

class BankAccount
{
    string name;
    int accno;
    string type;
    float balance;

public:

    void assign()
    {
        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Account Number: ";
        cin>>accno;

        cout<<"Enter Account Type: ";
        cin>>type;

        cout<<"Enter Balance: ";
        cin>>balance;
    }

    void deposit()
    {
        float amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;

        balance = balance + amount;
    }

    void withdraw()
    {
        float amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;

        if(amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout<<"Insufficient Balance\n";
        }
    }

    void display()
    {
        cout<<"\nName: "<<name;
        cout<<"\nBalance: "<<balance<<endl;
    }
};

int main()
{
    BankAccount b;

    b.assign();
    b.deposit();
    b.withdraw();
    b.display();


}