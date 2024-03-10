// Write a program to calculate an average fuel consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litres).

#include <stdio.h>

int main(){
    int num1, num2;
    int distance;
    int L;
    double average;

    printf("Enter the first distance in km: ");
    scanf("%d", &num1);

    printf("Enter the second distance in km: ");
    scanf("%d", &num2);

    distance = num2 - num1;

    printf("Distance in km: %d\n", distance);

    printf("Enter the spent fuel(in litres): ");
    scanf("%d", &L);

    average = (double)distance / L;

    printf("Average of fuel consumption: %.2lf", average);

    return 0;
}