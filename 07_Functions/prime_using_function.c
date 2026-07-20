#include<stdio.h>

int check(int n)
{
    int i, count = 0;

    if(n <= 1)
        return 0;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        return 1;
    else
        return 0;
}

void main()
{
    int a, n;

    printf("Enter the number: ");
    scanf("%d", &n);

    a = check(n);

    if(a == 1)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}
