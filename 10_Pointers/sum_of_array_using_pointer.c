#include<stdio.h>

void main()
{
    int a[5], i, sum = 0;
    int *p;

    p = a;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    for(i = 0; i < 5; i++)
        sum = sum + *(p + i);

    printf("Sum = %d", sum);
}
