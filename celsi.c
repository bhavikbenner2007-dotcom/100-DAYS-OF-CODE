#include <stdio.h>

int main() {
    float celcius, farenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celcius);

    farenheit = (9.0 / 5.0) * celcius + 32;

    printf("Temperature in Fahrenheit is: %.2f\n", farenheit);

    return 0;
}

