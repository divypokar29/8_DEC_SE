#include<iostream>
using namespace std;
int main(){
    int age;

    cout<<"Enter a age :";
    cin>>age;

    if(age>18){
        cout<<"Aligible for voting";
    }else{
        cout<<"Not aligable";
    }
}