#include<stdio.h>

void main()
{
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");

    ch = fgetc(fp);

    printf("Character = %c", ch);

    fclose(fp);
}
