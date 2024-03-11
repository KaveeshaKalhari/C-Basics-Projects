// Calculate the summation, subtraction, multiplication, division and modular values of given two numbers.

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int sub = num1 - num2;
    int multi = num1 * num2;

    printf("Value of summation = %d\n", sum);
    printf("Value of subtraction = %d\n", sub);
    printf("Value of multiplication = %d\n", multi);

    if (num2 != 0)
    {
        int division = num1 / num2;
        int modular = num1 % num2;

        printf("Value of division = %d\n", division);
        printf("Value of modular = %d\n", modular);

    } else {
        printf("Cannot perform division and modular operations because the second number is zero.");
    }

    return 0;
}