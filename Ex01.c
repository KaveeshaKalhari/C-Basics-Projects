// Write a program to calculate the area and circumference of a circle.
// Area = PI*radius*radius, circumference = 2*PI*radius
// PI is an arithmetic constant whose approximated value is 3.14159

#include <stdio.h>
#define PI 3.14

int main (){
    double a, c, r;

    printf("Enter a value for radius:");
    scanf("%lf", &r);

    a= PI * r * r;
    c= 2 * PI * r;

    printf("Value of area: %lf\n", a);
    printf("Value of circumference: %lf", c);

    return 0;

}