#include<stdio.h>

int main()
{
    int n,r,max=0;

    printf("Enter number: ");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        if(r>max)
            max=r;

        n=n/10;
    }

    printf("Max digit = %d",max);

    
}   