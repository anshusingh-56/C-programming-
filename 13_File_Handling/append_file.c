#include<stdio.h>

void main()
{
    FILE *fp;

    fp = fopen("data.txt", "a");

    fprintf(fp, "\nNew data added to file.");

    fclose(fp);

    printf("Data appended successfully");
}
