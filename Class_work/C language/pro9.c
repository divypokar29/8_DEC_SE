// logical operater example 

#include<stdio.h>
void main()
{
    int num1,num2,num3; //step 1 :variable declaration 

    num1 = 20;//step 2 : variable defination 
    num2 = 34;
    num3 = 40;

    int result = (num1 > num2) && (num1 < num3);
    printf("\n%d",result);

    result = (num1 < num2) && (num1 < num3);
    printf("\n%d",result);

    result = (num1 > num2) || (num1 < num3);
    printf("\n%d",result);
}