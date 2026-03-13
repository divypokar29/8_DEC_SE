#include<stdio.h>

int main() {
    int years,days;

    printf("Enter years: ");
    scanf("%d",&years);

    days = years * 365;

    printf("Days = %d\n",days);

    printf("Enter days: ");
    scanf("%d",&days);

    years = days / 365;

    printf("Years = %d",years);

    return 0;
}