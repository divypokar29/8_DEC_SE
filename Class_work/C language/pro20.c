// which no is greter out of three no use it nested if
#include <stdio.h>

void main()
{
  int num1,num2,num3;
  printf("Enter your no1 : ");
  scanf("%d",&num1);
  
  printf("Enter your no2 : ");
  scanf("%d",&num2);
  
   printf("Enter your no2 : ");
  scanf("%d",&num3);
 
 
 if (num1 > num2)
 
{
    if(num1> num3){
        printf("number 1 is greter no ");
    }
    else{
        printf("number 3 is greater");
    }
}
else{
    if (num2> num3){
        printf("number 2 is greter no ");
    }
    else{
        printf("number 3 is greater");
    }
}
}
