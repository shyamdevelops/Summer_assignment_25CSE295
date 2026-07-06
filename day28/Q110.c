//program to Create bank account system.
#include <stdio.h>
int main()
{
    int choice;
    float balance = 1000, amount;
    while (1)
    {
        printf("\n--- Bank Account System ---\n");
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Deposit Successful.\n");
            break;
        case 2:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            if (amount <= balance)
            {
                balance -= amount;
                printf("Withdrawal Successful.\n");
            }
            else
                printf("Insufficient Balance.\n");
            break;
        case 3:
            printf("Current Balance = %.2f\n", balance);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid Choice.\n");
        }
    }
}