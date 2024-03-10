// Write a program to input marks of five subjects of a student and calculate the total, average of all subjects.


#include <stdio.h>

int main(){
    int num1, num2, num3, num4, num5;

    printf("Enter marks for five subjects:");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

    int total = num1 + num2 + num3 + num4 + num5;
    double average = total / 5;

    printf("Total marks of five subjects: %d\n", total);
    printf("Average marks of five subjects: %.2lf\n", average);

    return 0; 
    
    }