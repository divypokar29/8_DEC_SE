#include<stdio.h>

main()
{
    int arr[5]={12,23,45,5,78};
    int i;
    int *p;

    p = arr;

    for (i=0;i<5;i++){
        //printf("\n %d",arr[i]);
        printf("\n %d ", *(p+i));
    }
}