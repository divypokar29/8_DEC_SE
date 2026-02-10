// string comparision


#include <stdio.h>
#include <string.h>

void main(){

    char s1[10];
    char s2[10];


    printf("Enter string 1 :");
    gets(s1);
    printf("Enter string 2 :");
    gets(s2);

    if(strcmp(s1,s2) == 0){
        printf("\n both are same ");
    }else{
        printf("\n both are difrent ");
    }
}

// this are a logical not inbild 


#include <stdio.h>
#include <string.h>

void main(){

    char s1[10];
    char s2[10];
int flag=0,i=0;

    printf("Enter string 1 :");
    gets(s1);
    printf("Enter string 2 :");
    gets(s2);

   while (s1[i]!='\0' || s2[i]!='\0')
   {
    if(s1[i] != s2[i]){
        flag=1;
    }
    i++;
   }
   if(flag==1){
    printf("bothe string are not same ");
   }else
   {
     printf("bothe string are same ");
   }
   
}
