#include<stdio.h>

int main() {
    float p, r, t, si;

    // Separate input for Principal
    printf("Enter Principal: ");
    scanf("%f", &p);

    // Separate input for Rate
    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    // Separate input for Time
    printf("Enter Time (in years): ");
    scanf("%f", &t);

    // Calculation using the Simple Interest formula
    si = (p * r * t) / 100;

    printf("\nSimple Interest = %.2f\n", si);

    return 0;
}