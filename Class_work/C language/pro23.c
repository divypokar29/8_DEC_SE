//switch example
#include <stdio.h>

int main()
{
  char  char_value;
  printf("enter a character :");
  scanf("%d",&char_value);
  
  
 switch(char_value)
 {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
    
       printf("vowel");
       break;
       
    default:
    printf("not a vowel");
    
 }
}