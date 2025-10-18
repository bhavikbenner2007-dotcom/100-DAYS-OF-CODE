#include <stdio.h>


int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

   
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Annual Interest Rate : ");
    scanf("%f", &rate);

    printf("Enter Time : ");
    scanf("%f", &time);

    
    simpleInterest = (principal * rate * time) / 100;

    
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    
    printf("Simple Interest = %f\n", simpleInterest);
    printf("Compound Interest = %f\n", compoundInterest);

    return 0;
}