#include<stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

void main()
{
    struct student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Roll Number = %d\n", s.roll);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f", s.marks);
}
