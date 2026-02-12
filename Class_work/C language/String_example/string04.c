// reverse to character 

/*\
convert string into reverse order

*/
#include <stdio.h>
#include <string.h>

int main()
{
   char name[10];
   int i;
   

   printf("Enter your name : ");
   gets(name);
   
   printf("Name : %s",name);
   printf("\nrevers : %s",strrev(name));
   
   
}