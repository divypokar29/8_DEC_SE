// withou using this pointer with same name parameter and same name member 
#include<iostream>
using namespace std;

class Sample
{
    public:
       int id =10;

       void display(Sample s)
       {
        this->id =s.id;
        cout<<"\n id = "<<id;
        cout<<"\n objects id = "<<s.id;
        
       }
};
main(){

    Sample s1;
    s1.display(s1);
    cout<<"\n s1 id = "<<s1.id;
    
}