#include<stdio.h>

void main()
{
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
}
