// withou using this pointer with same name parameter and same name member 
#include<iostream>
using namespace std;

class Sample
{
    public:
       int id =10;

       void display(Sample *s)// pass by referance 
       {
       s->id =100;
        
       }
};
main(){

    Sample s1;
    s1.id =10;
    cout<<"\n s1 id = "<<s1.id;
    s1.display(&s1);
    cout<<"\n after chnages in pass by referance \n s1.id = "<<s1.id;
    
}