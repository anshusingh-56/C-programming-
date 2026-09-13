#include<stdio.h>

void main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");

    fprintf(fp, "Hello, this is my first file program.");

    fclose(fp);

    printf("Data written successfully");
}
