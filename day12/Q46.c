// C program to check if a number is an Armstrong number or not

#include <stdio.h>
int armstrong(int n)
{
    int original = n, sum = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (original == sum)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (armstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is not an Armstrong Number.\n", num);
    return 0;
}