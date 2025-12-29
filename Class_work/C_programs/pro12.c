// enter number from user and check enter number is even or odd
#include<stdio.h>
void main()
{
    //true means even 
    
    int num1;
    printf("enter your number:");
    scanf("%d",&num1);
    
    printf("%d",num1%2==0);
}