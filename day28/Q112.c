//program to Create contact management system.
#include <stdio.h>
#include <string.h>
struct Contact
{
    char name[30];
    char phone[15];
};
int main()
{
    struct Contact c[10];
    int count = 0, choice, i;
    char search[30];
    while (1)
    {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n2. Display Contacts\n3. Search Contact\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (count < 10)
            {
                printf("Enter Name: ");
                scanf(" %[^\n]", c[count].name);
                printf("Enter Phone: ");
                scanf("%s", c[count].phone);
                count++;
                printf("Contact Added Successfully.\n");
            }
            else
                printf("Contact List Full.\n");
            break;
        case 2:
            printf("\nName\t\tPhone\n");
            for (i = 0; i < count; i++)
                printf("%s\t%s\n", c[i].name, c[i].phone);
            break;
        case 3:
            printf("Enter Name to Search: ");
            scanf(" %[^\n]", search);
            for (i = 0; i < count; i++)
            {
                if (strcmp(search, c[i].name) == 0)
                {
                    printf("Name : %s\nPhone: %s\n", c[i].name, c[i].phone);
                    break;
                }
            }
            if (i == count)
                printf("Contact Not Found.\n");
            break;
        case 4:
            return 0;
        default:
            printf("Invalid Choice.\n");
        }
    }
}