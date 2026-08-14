#include<stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

void main()
{
    struct student s[3];
    int i;

    printf("Enter details of 3 students:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nRoll = %d\n", s[i].roll);
        printf("Name = %s\n", s[i].name);
        printf("Marks = %.2f\n", s[i].marks);
    }
}
