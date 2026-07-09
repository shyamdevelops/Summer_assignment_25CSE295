// program to Create mini library system.

#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[50];
    int n, i, searchId, found = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", b[i].author);
    }

    printf("\nLibrary Records:\n");
    printf("---------------------------------------------\n");
    printf("ID\tTitle\t\tAuthor\n");
    printf("---------------------------------------------\n");

    for(i = 0; i < n; i++)
        printf("%d\t%s\t\t%s\n", b[i].id, b[i].title, b[i].author);

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &searchId);

    for(i = 0; i < n; i++)
    {
        if(b[i].id == searchId)
        {
            printf("\nBook Found\n");
            printf("ID    : %d\n", b[i].id);
            printf("Title : %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Book Not Found.");

    return 0;
}