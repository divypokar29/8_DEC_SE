// withou using this pointer with same name parameter and same name member 
#include<iostream>
using namespace std;

class Sample
{
    public:
       int a =10;

       Sample(const Sample &obj){
        a = obj.a;
       }
};
main(){

    Sample s1 = Sample(s1);
    Sample s2 = s1;//copy constructure
    cout<<"\n s1 a value = "<<s1.a;
    cout<<"\n s2 a value = "<<s2.a;
    
}