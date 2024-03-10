// Write a program to input a number and find the square root of the given number. You may use sqrt() inbuilt function.
// Hint:
// #include <math.h>
// root = sqrt(num);

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter a value for angle of triangle:");
    scanf("%d", &a);

    printf("Enter a value for angle of triangle:");
    scanf("%d", &b);

    c = 180 - (a + b);

    printf("Value of other angle of triangle: %d", c);

    return 0;
}