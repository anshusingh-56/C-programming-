#include<stdio.h>

void main()
{
    int a[10], n, i, item, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &item);

    for(i = 0; i < n; i++)
    {
        if(a[i] == item)
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
