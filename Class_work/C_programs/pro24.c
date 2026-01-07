//accept 7 character from user 
#include <stdio.h>

int main()
{
   char i;
   char charaD;
   
   for (i=1;i<=7;i++)
   {
       printf("Enter character :");
       scanf("%c",&charaD);
       getchar(); //to cache junk  - garbage avlue
   }
}