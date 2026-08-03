#include<stdio.h>

void main()
{
    int a[5], i;
    int *p;

    p = a;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", p + i);
    }

    printf("Array Elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
}
