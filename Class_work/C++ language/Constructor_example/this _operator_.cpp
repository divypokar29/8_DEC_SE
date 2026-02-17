// withou using this pointer with same name parameter and same name member 
#include<iostream>
using namespace std;

class Sample
{
    public:
       int a =10;

       Sample(int a ){
        a = a;
        cout<< "\n inside the constructure : a = "<<a;

       }
       void display()
       {
        cout<<"\n a = "<< a;
       }
};
main(){

    Sample obj =Sample(200);
    obj.display();
}

///solution :::

// withou using this pointer with same name parameter and same name member 
#include<iostream>
using namespace std;

class Sample
{
    public:
       int a =10;

       Sample(int a1 ){
        a = a1;
        cout<< "\n inside the constructure : a = "<<a;

       }
       void display()
       {
        cout<<"\n a = "<< a;
       }
};
main(){

    Sample obj =Sample(200);
    obj.display();
}