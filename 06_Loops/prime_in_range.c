#include <stdio.h>

int main()
{
    int i, j, n, flag;

    printf("Enter range: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        flag = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            printf("%d\n", i);
    }

    return 0;
}
