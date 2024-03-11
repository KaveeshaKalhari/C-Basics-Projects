// Enter a two digit number and get the summation of that two numbers.
// Eg: number _ 25
//     Answer _ 2+5=7

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a two digit number:");
    scanf("%d", &num);

    int digit1 = num / 10;
    int digit2 = num % 10;

    int ans = digit1 + digit2;

    printf("Summation of the that two numbers: %d", ans);

    return 0;
}