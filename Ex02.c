// Write a program to input temperature in Centigrade and convert to Fahrenheit.
// The temperature conversion formula from degree Celsius to Fahrenheit is given by;
// Fahrenheit = (Celsius * 9 / 5) + 32

#include <stdio.h>

int main(){
    float C, F;

    printf("Enter a value for temperature in centigrade:");
    scanf("%f", &C);

    F = (C * 9/5)+ 32;

    printf("Centigrade %.2f = Farenheit %.2f", C, F);

    return 0;
}