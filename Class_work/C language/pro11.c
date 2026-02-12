//find maximum value from 2 vaues : conditional operator
// ternary operator : becuse it devided in 3 part 

 #include<stdio.h>
 void main()
 {
    int num1,num2;

num1=45;
num2=85;
//          exp1          exp2    exp3
int max =(num1 > num2 ) ? num1 : num2;
    printf("\n max =%d",max);
    
 }