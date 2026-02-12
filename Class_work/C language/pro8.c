//example of releational operator 

#include<stdio.h>
void main ()
{
    int num1,num2; //step 1 :vatiablr declaration 

    num1 = 20;
    num2 = 34;

    //relational or comparision operator 
    //0 - false 1 means true 

    int result;

    result = num1 > num2 ;
    printf ("%d",result);

     result = num1 < num2 ;
    printf ("\n%d",result);

     result = num1 == num2 ;
    printf ("\n%d",result);

     result = num1 != num2 ;
    printf ("\n%d",result);
}