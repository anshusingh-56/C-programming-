#include<stdio.h>

void main()
{
    char str[100];
    int i, alpha = 0, digit = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alpha++;

        else if(str[i] >= '0' && str[i] <= '9')
            digit++;
    }

    printf("Alphabets = %d\n", alpha);
    printf("Digits = %d", digit);
}
