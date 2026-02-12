/*
there are mainly 2 types of array 


1)single dimantion array :

  1D Array 

  []

2)multi dimantion array :

 
  2D array  ,  3D array

  [][]       ,    [][][]
*/


#include <stdio.h>

int main (){
    int a [2][3]={{10,20,30},{40,50,60}};
    int row,col;
    for(row =0; row< 2;row++)
    { 
     for 
      (col=0;col < 3; col++){
       printf("%d", a[row][col]);
       }
     printf("\n");
    }

    return 0;
}

