#include<stdio.h>

void main()
{
    int a = 10;
    int *p;
    int **q;

    p = &a;
    q = &p;

    printf("Value of a = %d\n", a);
    printf("Using Pointer = %d\n", *p);
    printf("Using Pointer to Pointer = %d", **q);
}
