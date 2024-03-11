// Program a currency convertor. Convert US Dollar to rupees
// 129.164 Rs = 1 Dollar

#include <stdio.h>

int main(){
    double dollars, rupees;

    printf("Enter the dollars: ");
    scanf("%lf", &dollars);

    rupees = dollars * 129.164 ;

    printf("US Dollar %.0lf = Rupees %.2lf", dollars, rupees);

    return 0;
}