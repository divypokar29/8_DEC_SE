/*
I
I N
I N D
I N D I
I N D I A
*/
#include <stdio.h>

int main (){
    char str[10]="INDIA";
    int i,j;

    for (i=0;i<5;i++){
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}