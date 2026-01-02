
#include <stdio.h>

int main()
{
  int  day;
  printf("enter a day :");
  scanf("%d",&day);
  
  
  switch(day){
      case 1:
      printf("monday");
      break;
      
      case 2:
      printf("tuesday");
      break;
      
       case 3:
      printf("wenasday");
      break;
      
       case 4:
      printf("thurshday");
      break;
      
       case 5:
      printf("friday");
      break;
      
       case 6:
      printf("saterday");
      break;
      
       case 7:
      printf("sunday");
      break;
      default:
      printf("invalid day !!!");
  }
}