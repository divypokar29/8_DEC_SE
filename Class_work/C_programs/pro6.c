// accept book price from user and display on console screen 

#include<stdio.h>
void main()
{
    //step 1 : variable declaration 
    float book_price;

    //step 2 : ask from user 

    printf("Enter book price : ");
    scanf("%f",&book_price);

    //step 3 : display book price on console screen
    printf("\n book_price = %.2f",book_price);
}