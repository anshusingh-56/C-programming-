#include<stdio.h>

void main()
{
    FILE *fp;

    fp = fopen("data.txt", "w");

    fprintf(fp, "Name: Anshu\n");
    fprintf(fp, "Course: B.Tech CSE\n");
    fprintf(fp, "Year: 2nd Year\n");

    fclose(fp);

    printf("Data written successfully");
}
