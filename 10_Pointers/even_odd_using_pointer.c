#include<stdio.h>

void main()
{
    int n;
    int *p;

    printf("Enter a number: ");
    scanf("%d", &n);

    p = &n;

    if(*p % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}
