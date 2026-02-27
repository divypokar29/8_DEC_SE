#include<iostream>
using namespace std;

class B;
class A
{
    private:
     int record =100; //private data member 

     friend class B;//friend calss
};

class B 
{
    public:
     void Display(A obj)
     {
        cout<<"\n record = "<<obj.record;
     }
};

main(){
    A obj = A();
    B obj = B();
}