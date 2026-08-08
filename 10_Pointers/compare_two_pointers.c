#include<stdio.h>

void main()
{
    int a = 10, b = 20;
    int *p1, *p2;

    p1 = &a;
    p2 = &b;

    if(*p1 > *p2)
        printf("%d is Greater", *p1);
    else
        printf("%d is Greater", *p2);
}
