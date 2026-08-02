#include<stdio.h>

void main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %u\n", &a);
    printf("Pointer Value = %u\n", p);
    printf("Value using Pointer = %d", *p);
}
