#include<stdio.h>

void myfun();

void main(){
    printf("\n this is function example\n");\
    myfun();
}


void myfun(){
    printf("\nhello");
    printf("\nwelcom to c programing");
}

//----------------------------------------------------------------------------------------------------------------------

#include<stdio.h>

void add();
void mul();
void division();
void sub();

void main(){
   int choice;
   
   printf("\nMENU   :: \n");
   printf("\npress 1 for addition  : ");
   printf("\npress 2 for multiplication  : ");
   printf("\npress 3 for division  : ");
   printf("\npress 4 for substraction  : ");
   
   
   printf("\n\n enter your choice :");
   scanf("%d",&choice);
   
   switch(choice){
       case 1:
       add();
       break;
       
        case 2:
       mul();
       break;
       
   }
}


void add(){
    int num1,num2;
    printf("enter number 1: ");
    scanf("%d",&num1);
    
      printf("enter number 2: ");
    scanf("%d",&num2);
    
    int ans = num1 + num2;
    
    printf("%d",ans);
}

void mul(){
    
}

void division(){
    
}

void sub(){
    
}