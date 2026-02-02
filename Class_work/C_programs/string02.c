/*
strcate() : string concatation

  when you want to join orr combine two string we can

  use inbuild strcat() function

*/

#include <stdio.h>
#include <string.h>

int main(){
    char s1[10] = "hello";
    char s2[10] ="world";

    printf("\n result =%s",strcat(s1,s2));
    
}



// ==============================================================================================


#include <stdio.h>
#include <string.h>

int main(){
    char s1[10] = "hello";
    char s2[10] ="world";

    int i=0,j=0;
    while (s1[i]!='\0')
    {
        i++;
    }
printf("\n %d",i);
    while (s2[j]!='\0')
    {
        s1[i] =s2[j];
        i++;
        j++;
    }
    
    printf("\n result = %s",s1);
    
}
