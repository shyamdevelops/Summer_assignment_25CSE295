//program to Create ticket booking system.
#include <stdio.h>
int main()
{
    int seats = 10;
    int choice, n;
    while (1)
    {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Ticket\n2. Cancel Ticket\n3. Available Seats\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter number of tickets: ");
            scanf("%d", &n);
            if (n <= seats)
            {
                seats -= n;
                printf("Booking Successful.\n");
            }
            else
                printf("Not Enough Seats Available.\n");
            break;
        case 2:
            printf("Enter number of tickets to cancel: ");
            scanf("%d", &n);
            if (seats + n <= 10)
            {
                seats += n;
                printf("Cancellation Successful.\n");
            }
            else
                printf("Invalid Cancellation.\n");
            break;
        case 3:
            printf("Available Seats = %d\n", seats);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid Choice.\n");
        }
    }
}