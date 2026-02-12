#include <stdio.h>

int main()
{
   int arr[5]={20,15,22,36,50};
   
   for (int i =0; i<5;i++){
       if(arr[i<18]){
           continue;
       }
       printf("%d\n",arr[i]);
   }
}

// printf("%d",sizeof(arr) / sizeof(arr[0]));---------------------------------------------------------------------------------------




#include <stdio.h>

int main()
{
   int choice=0;
   
   do{
      
       printf("1. withdraw \n");
       printf("2. check balance \n");
       printf("3. exit \n");
       printf("enter a choice :");
       scanf("%d",&choice);
   }while(choice<3 && choice > 0);
}

// printf("%d",sizeof(arr) / sizeof(arr[0]));