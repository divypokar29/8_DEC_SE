#include <stdio.h>

int main (){
    int a [2][3];
    int row,col;
    for(row =0; row< 2;row++)
    { 
     for 
      (col=0;col < 3; col++){
       printf("Enter element [%d] [%d]: ",row+1,col+1);
       scanf("%d",&a[row][col]);
       }
     printf("\n-----------------\n");
    }

    return 0;
}