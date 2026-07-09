// program to Develop complete mini project using arrays, strings and functions.

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[50];
int n = 0;

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;
    printf("Student Added Successfully.\n");
}

void displayStudents()
{
    int i;

    if(n == 0)
    {
        printf("No Records Found.\n");
        return;
    }

    printf("\n-----------------------------------------\n");
    printf("Roll\tName\t\tMarks\n");
    printf("-----------------------------------------\n");

    for(i = 0; i < n; i++)
        printf("%d\t%s\t\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
}

void searchStudent()
{
    int i, roll;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nRecord Found\n");
            printf("Roll : %d\n", s[i].roll);
            printf("Name : %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            return;
        }
    }

    printf("Record Not Found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Choice.");
        }

    } while(choice != 4);

    return 0;
}