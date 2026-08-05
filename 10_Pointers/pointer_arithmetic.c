#include<stdio.h>

void main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Address = %u\n", p);

    p++;

    printf("After Increment = %u\n", p);

    p--;

    printf("After Decrement = %u", p);
}
