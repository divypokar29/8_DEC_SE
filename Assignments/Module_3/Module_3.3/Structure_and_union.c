#include<stdio.h>

struct structure_example
{
    int a;
    float b;
    char c;
};

union union_example
{
    int a;
    float b;
    char c;
};

int main()
{
    struct structure_example s;
    union union_example u;

    printf("Size of structure = %lu\n", sizeof(s));
    printf("Size of union = %lu\n", sizeof(u));

    s.a = 10;
    s.b = 20.5;
    s.c = 'A';

    printf("\nStructure values:\n");
    printf("a = %d\n", s.a);
    printf("b = %f\n", s.b);
    printf("c = %c\n", s.c);

    u.a = 10;
    u.b = 20.5;
    u.c = 'A';

    printf("\nUnion values:\n");
    printf("a = %d\n", u.a);
    printf("b = %f\n", u.b);
    printf("c = %c\n", u.c);

    
}