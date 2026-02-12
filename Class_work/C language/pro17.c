// else if state mant 
#include <stdio.h>

void main()
{
  int marks;
  printf("Enter your marks : ");
  scanf("%d",&marks);
  
  if(marks>=70 && marks <100)
  {
      printf("A grade");
  }
  else if(marks>=60 && marks <70){
      printf("B grade");
  }
  else if(marks>=50 && marks <60){
      printf("c grade");
  }
  else if(marks>=40 && marks <50){
      printf("d grade");
  }
  else
  {
      printf("Faill");
  }
}