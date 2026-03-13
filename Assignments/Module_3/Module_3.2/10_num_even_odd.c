#include<stdio.h>

int main()
{
    int i,num,even=0,odd=0,se=0,so=0;

    for(i=1;i<=10;i++)
    {
        printf("Enter number: ");
        scanf("%d",&num);

        if(num%2==0)
        {
            even++;
            se+=num;
        }
        else
        {
            odd++;
            so+=num;
        }
    }

    printf("Even numbers = %d\n",even);
    printf("Odd numbers = %d\n",odd);
    printf("Sum of even = %d\n",se);
    printf("Sum of odd = %d\n",so);

   
}