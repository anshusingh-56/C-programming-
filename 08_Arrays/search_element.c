#include<stdio.h>

void main()
{
    int a[5], i, n, flag = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &n);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == n)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("Element Found");
    else
        printf("Element Not Found");
}
