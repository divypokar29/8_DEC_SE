
//find largest element from array using of pointer 
#include<stdio.h>

main()
{
    int a[5] = {20,50,40,86,70};
    int *p;
    int max,i;

    p =a;

    //max =a[0];
    max=*p;

    for (i=1;i<5;i++){
    //     if(a[i]>max)
    //     {
    //         max= a[i];
    //     }

    if(*(p+i)> max){
        max =*(p+i);
    }
    }
printf("\n max =%d",max);
}