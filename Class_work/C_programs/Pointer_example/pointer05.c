//sum of array

#include<stdio.h>

main()
{
    int arr[5]={12,23,45,5,78};
    int i;
    int *p;
    int sum =0;


    p = arr;

    for (i=0;i<5;i++){
       sum += *(p+i);
    }
    printf("\n sum = %d",sum);
}