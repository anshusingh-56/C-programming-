#include<stdio.h>

void main()
{
    int a[5], b[5], i;
    int *p1, *p2;

    p1 = a;
    p2 = b;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", p1 + i);

    for(i = 0; i < 5; i++)
        *(p2 + i) = *(p1 + i);

    printf("Copied Array:\n");

    for(i = 0; i < 5; i++)
        printf("%d ", *(p2 + i));
}
