/*
String : string is a collection of charactars

  in a simple language we can say that string which is a one kind of arry 

  or we can say that character of arry 

  syntax:

   char name[size]={};


   or 

   char name [6] = {'h','e','l','l','o','\o'};
*/

#include <stdio.h>

int main(){
    char name [6]={'h','e','l','l','o',};

    int i; 

    for (i=0;i<6;i++){
        printf("\n %c",name[i]);
    }
}


// -----------------------------------------------------

#include <stdio.h>
#include <string.h>

int main(){
    char name [10]="divy";

     printf("%d",strlen(name));
    
}
/*

*/
// ---------------------------------------------------------------------


#include <stdio.h>
#include <string.h>

int main(){
    char name [10]="hellodivy";

    int i; 
    int count=0;

    for (i=0;name[i]!='\0';i++){
        printf("\n %c",name[i]);
        count++;
    }
    
    printf("\nlgth =%d",count);
}

// ------------------------------------------------------------

#include <stdio.h>
#include <string.h>

int main(){
    char name [10];
printf("Enter your name : ");
scanf("%s",&name);
gets(name);



getchar();

    printf("\n name = %d",name);
    printf("n length =%d",strlen(name));
}


// -----------------------------------------------------------------------