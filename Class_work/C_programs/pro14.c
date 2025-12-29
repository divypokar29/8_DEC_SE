// find even or odd number by if condition 
#include<stdio.h>
void main()
{
    
    int numb ;
    
    
    printf("enter your number = ");
    scanf("%d",&numb);
    
  if(numb%2==0)
  {
      printf("\n %d is even number",numb);
  }else
  {
       printf("\n %d is odd number",numb);
  }
}