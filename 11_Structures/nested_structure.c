#include<stdio.h>

struct address
{
    char city[50];
    int pin;
};

struct student
{
    int roll;
    char name[50];
    struct address a;
};

void main()
{
    struct student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter city: ");
    scanf("%s", s.a.city);

    printf("Enter PIN: ");
    scanf("%d", &s.a.pin);

    printf("\nStudent Details:\n");
    printf("Roll Number = %d\n", s.roll);
    printf("Name = %s\n", s.name);
    printf("City = %s\n", s.a.city);
    printf("PIN = %d", s.a.pin);
}
