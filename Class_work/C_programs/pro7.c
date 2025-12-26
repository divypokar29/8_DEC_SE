// Example of assignment and shorthand operator

#include<stdio.h>
void main ()
{
    int a,b;
    
    a=10; //use of assignment operator
    b=5;
    
    printf("\n a = %d , b = %d",a,b);
    
    //shorthand operator
    
    // a = a+b //operator 1 = a+b operation 2 : a = ans of a + bitand
    
    
    a += b; //operation 1 : adding value of b inside the a 
    
    
    printf ("\n a =%d , b =%d ",a,b);
}