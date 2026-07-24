#include<stdio.h>

void main()
{
    int a[5], i, max, smax;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    if(a[0] > a[1])
    {
        max = a[0];
        smax = a[1];
    }
    else
    {
        max = a[1];
        smax = a[0];
    }

    for(i = 2; i < 5; i++)
    {
        if(a[i] > max)
        {
            smax = max;
            max = a[i];
        }
        else if(a[i] > smax && a[i] != max)
        {
            smax = a[i];
        }
    }

    printf("Second Largest = %d", smax);
}
