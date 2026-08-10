#include<stdio.h>

void main()
{
    int n, rev = 0, rem;
    int *p;

    printf("Enter a number: ");
    scanf("%d", &n);

    p = &n;

    while(*p > 0)
    {
        rem = *p % 10;
        rev = rev * 10 + rem;
        *p = *p / 10;
    }

    printf("Reverse Number = %d", rev);
}
