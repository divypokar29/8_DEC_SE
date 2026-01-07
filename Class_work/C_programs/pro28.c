//diplay character value 
// ASCII : American standard code information for interchange 

#include<stdio.h>
void main(){
    int num = 65;
  
    printf("\n %c",num);
}
/*
------------------------------------------------------------------------------------------------------------------------------------

*/

#include<stdio.h>
void main(){
    int num = 65;
    int row ;
  for(row= 1; row <= 26 ; row++){
    printf(" %c",num);
    num++;
  }
}


/*
--------------------------------------------------------------------------------------------------------------------------------------

*/

#include<stdio.h>

void main(){
    
    int num = 65;
    int row ;
    int col;
    
  for(row= 1; row <= 5 ; row++){
      for(col=1;col<=row;col++){
    printf(" %c ",num);
    num++;
      }
      printf("\n");
  }
  
  
}