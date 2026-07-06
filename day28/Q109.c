// program to Create library management system.
#include <stdio.h>
#include <string.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;
};
int main()
{
    struct Book b[3] = {
        {101, "C Programming", "Dennis Ritchie", 0},
        {102, "Java Basics", "James Gosling", 0},
        {103, "Python Guide", "Guido van Rossum", 0}
    };
    int choice, id, i, found;
    while (1)
    {
        printf("\n--- Library Management System ---\n");
        printf("1. Display Books\n2. Issue Book\n3. Return Book\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
            for (i = 0; i < 3; i++)
                printf("%d\t%s\t%s\t%s\n", b[i].id, b[i].title, b[i].author,
                       b[i].issued ? "Issued" : "Available");
            break;
        case 2:
            printf("Enter Book ID: ");
            scanf("%d", &id);
            found = 0;
            for (i = 0; i < 3; i++)
            {
                if (b[i].id == id)
                {
                    found = 1;
                    if (!b[i].issued)
                    {
                        b[i].issued = 1;
                        printf("Book Issued Successfully.\n");
                    }
                    else
                        printf("Book Already Issued.\n");
                }
            }
            if (!found)
                printf("Book Not Found.\n");
            break;
        case 3:
            printf("Enter Book ID: ");
            scanf("%d", &id);
            found = 0;
            for (i = 0; i < 3; i++)
            {
                if (b[i].id == id)
                {
                    found = 1;
                    if (b[i].issued)
                    {
                        b[i].issued = 0;
                        printf("Book Returned Successfully.\n");
                    }
                    else
                        printf("Book Was Not Issued.\n");
                }
            }
            if (!found)
                printf("Book Not Found.\n");
            break;
        case 4:
            return 0;
        default:
            printf("Invalid Choice.\n");
        }
    }
}