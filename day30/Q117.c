//program to Create student record system using arrays and strings.

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[50];
    int n, i, searchRoll, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Records:\n");
    printf("-----------------------------------------\n");
    printf("Roll\tName\t\tMarks\n");
    printf("-----------------------------------------\n");

    for(i = 0; i < n; i++)
        printf("%d\t%s\t\t%.2f\n", s[i].roll, s[i].name, s[i].marks);

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == searchRoll)
        {
            printf("\nRecord Found\n");
            printf("Roll : %d\n", s[i].roll);
            printf("Name : %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Record Not Found.");

    return 0;
}