#include<stdio.h>

void main()
{
    int a[5], i, max;
    int *p;

    p = a;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    max = *p;

    for(i = 1; i < 5; i++)
    {
        if(*(p + i) > max)
            max = *(p + i);
    }

    printf("Largest Element = %d", max);
}
