#include <stdio.h>

int main()
{
    int i, n, p, ans = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter power: ");
    scanf("%d", &p);

    for(i = 1; i <= p; i++)
    {
        ans = ans * n;
    }

    printf("Answer = %d", ans);

    return 0;
}
