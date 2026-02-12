// nested for loop 

#include<stdio.h>
void main(){
    int row;
    int col;
    
    for (row = 1; row <= 5;row++)
    {
       
        for(col=1;col<=5;col++){
            printf(" # ");
        }
        printf("\n");
    }
}