// Write a program to calculate net salary of an employee by reading the values of number of hours and hourly rate through the keyboard.
// Number of hours = 100
// Hourly rate =Rs 250
// Gross salary= Number of hours * Hourly rate
// Deduction rate=8%
// Deduction= Gross salary* Deduction rate
// Net salary = gross salary –deduction


#include <stdio.h>

int main(){
    double numberOfHours;
    double hourlyRate;

    printf("Enter the number of hours:");
    scanf("%lf", &numberOfHours);

    printf("Enter the hourly rate:");
    scanf("%lf", &hourlyRate);

    double grossSalary = numberOfHours * hourlyRate;

    double deductionRate = 0.08;

    double deduction = grossSalary * deductionRate;

    double netSalary = grossSalary - deduction;

    printf("Gross salary = Rs %.2lf\n", grossSalary);
    printf("Deduction = Rs %.2lf\n", deduction);
    printf("Net salary = Rs %.2lf", netSalary);

    return 0;

}