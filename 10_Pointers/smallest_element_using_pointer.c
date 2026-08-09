#include<stdio.h>

void main()
{
    int a[5], i, min;
    int *p;

    p = a;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    min = *p;

    for(i = 1; i < 5; i++)
    {
        if(*(p + i) < min)
            min = *(p + i);
    }

    printf("Smallest Element = %d", min);
}
