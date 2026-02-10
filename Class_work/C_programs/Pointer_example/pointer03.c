/*
Call by referance : when we pass actual parameters in function calling time 
                    and apply changes in formal parameters if direct affevct
                    actual parameters 

    becouse inside of passing copy of value here we are passing address of parameters.

*/

#include<stdio.h>
void swap(int *a,int *b)///formal parameters
{
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
main(){
    int a=10,b=20;
    printf("\n BEFORE CHANGES IN FORMAL PARAMETERS :");
    printf("\n a= %d and b = %d",a,b);

    swap(&a,&b); //call by value

    printf("\n AFTER CHANGES IN FORMAL PARAMETERS :");
    printf("\n a= %d and b = %d",a,b);
}