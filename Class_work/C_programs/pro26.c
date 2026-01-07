// nested for loop under left angel 
/*
*
* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>
void main(){
    int row;
    int col;
    
    for (row = 1; row <= 5;row++)
    {
       
        for(col=1;col<=row;col++)
        {
        
             printf(" $ ");
            
       }
    printf("\n");
}
}