// C program to find sum of two numbers using function

#include <stdio.h>
// Function to find sum
int findSum(int a, int b)
{
    return a + b;
}
int main()
{
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = findSum(num1, num2);
    printf("Sum = %d", sum);
    return 0;
}