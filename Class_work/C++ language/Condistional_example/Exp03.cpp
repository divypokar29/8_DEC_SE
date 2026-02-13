#include<iostream>
using namespace std;
int main(){
    int a,b,c;

    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    cout<<"Enter third number :";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" number is greter";
        }else{
            cout<<c<<" number is greter";
        }
        
    }else if(b>c){
        cout<<b<<" number is greter";
    }else{
        cout<<c<<" number is greter";
    }
}