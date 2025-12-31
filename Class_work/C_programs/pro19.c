// which no is greter out of two no
#include <stdio.h>

void main()
{
  int num1,num2;
  printf("Enter your no1 : ");
  scanf("%d",&num1);
  
  printf("Enter your no2 : ");
  scanf("%d",&num2);
  
  if (num1 > num2)
  {
      printf("%d is a greter ",num1);
      
  }else{
      printf("%d is greter",num2);
  }
}