/*

Actual parameters and formal parameters 

formal parameter :

formal parameter pass in function defination time 

actual parameter pass at function calling time.

e.g.

void sum(int a,int b) // formal parameters 
{
ans =a + b;
printf("ans = %d",ans);
}
void main(){
int a=10,b=20;
sum(a,b);// actual pareameters

}


call by value :call by value is a most powerfull concept of function and pointer topic

  it does not change actual parameters if we appliy changess in formal parameters 

  in call by value we just passing copy of value not passing actual parameter
*/

#include<stdio.h>
void swap(int a,int b)///formal parameters
{
    int temp;
    temp =a;
    a=b;
    b=temp;
}
main(){
    int a=10,b=20;//actual parameters
    printf("\n BEFORE CHANGES IN SWAP FUNCTION");
    printf("\n a= %d and b = %d",a,b);

    swap(a,b); //call by value

    printf("\n AFTER CHANGES IN SWAP FUNCTION");
    printf("\n a= %d and b = %d",a,b);
}