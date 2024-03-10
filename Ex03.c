// Write a program to the third angle of a triangle if two angles are given. Sum of angles of a triangle is 180 degrees.
// If two angles of a triangle are given, then the third angle of the triangle is given by;
// C = 180 – (a + b)

#include <stdio.h>
#include <math.h>

int main(){
    double num, root;

    printf("Enter a number:");
    scanf("%lf", &num);

    root = sqrt(num);

    printf("Square root of %.2lf = %.2lf", num, root);

    return 0;
}