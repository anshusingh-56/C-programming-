#include<stdio.h>

void main()
{
    int a[5], i, pos = 0, neg = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] >= 0)
            pos++;
        else
            neg++;
    }

    printf("Positive = %d\n", pos);
    printf("Negative = %d", neg);
}
