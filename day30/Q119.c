// program to Create mini employee management system.

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[50];
    int n, i, searchId, found = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Records:\n");
    printf("-------------------------------------------\n");
    printf("ID\tName\t\tSalary\n");
    printf("-------------------------------------------\n");

    for(i = 0; i < n; i++)
        printf("%d\t%s\t\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &searchId);

    for(i = 0; i < n; i++)
    {
        if(emp[i].id == searchId)
        {
            printf("\nEmployee Found\n");
            printf("ID    : %d\n", emp[i].id);
            printf("Name  : %s\n", emp[i].name);
            printf("Salary: %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Employee Not Found.");

    return 0;
}