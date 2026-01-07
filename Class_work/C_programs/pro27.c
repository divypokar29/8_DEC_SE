// nested for loop under left angel 

/*
1
2 2
3 3 3
4 4 4 4 
5 5 5 5 5 
*/
#include<stdio.h>
void main(){
    int row;
    int col;
    
    for (row = 1; row <= 5;row++)
    {
       
        for(col=1;col<=row;col++)
        {
          printf(" %d ",row);
            
        }
    printf("\n");
}
}

/*
-------------------------------------------------------------------------------------------


1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5 
*/

// nested for loop under left angel 

#include<stdio.h>
void main(){
    int row;
    int col;
    
    for (row = 1; row <= 5;row++)
    {
       
        for(col=1;col<=row;col++)
        {
          printf(" %d ",col);
            
        }
    printf("\n");
}
}

/*
-------------------------------------------------------------------------------------------


1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5 
*/

// nested for loop under left angel 

    #include<stdio.h>
    void main(){
        int row;
        int col;
        int num =1 ;
        
        for (row = 1; row <= 5;row++)
        {
        
            for(col=1;col<=row;col++)
            {
            printf(" %d ",num);
            num++;
                
            }
        printf("\n");
    }
    }