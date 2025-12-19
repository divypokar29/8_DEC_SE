// variable declaration ,initlization and calling example

#include<stdio.h>
void main(){
 
   int num; // step 1: variable declarition
   int num1;
   int num2;
   
   num = 10;//step 2 : variable initlization 
   num1 = 30;
   num2 = 20;
   
   printf ("%d +%d +%d =%d",num,num1,num2, num+num1+num2);//adition
   printf ("\n%d -%d -%d =%d",num,num1,num2, num-num1-num2);//sub
   printf ("\n%d *%d *%d =%d",num,num1,num2, num*num1*num2);//multiplication
   printf ("\n%d /%d /%d = %d",num,num1,num2,num/num1/num2);//divistion
}