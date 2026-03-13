#include<stdio.h>

int main() {
    float r,l,b,area;

    // Circle
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("Area of Circle = %.2f\n",area);

    // Rectangle
    printf("Enter length and breadth: ");
    scanf("%f %f",&l,&b);
    area = l*b;
    printf("Area of Rectangle = %.2f\n",area);

    // Triangle
    area = 0.5*l*b;
    printf("Area of Triangle = %.2f\n",area);

    return 0;
}