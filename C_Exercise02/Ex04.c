// Enter a number and divide it by 5 then get the quotient and remainder.
// Eg: number _ 23
// quotient _ 23/5 _4
// remainder _ 23%5 _3

#include <stdio.h>

int main(){
    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    int quotient = num / 5;
    int reminder = num % 5;

    printf("Value of quotient: %d\n", quotient);
    printf("Value of reminder: %d", reminder);

    return 0;
}
