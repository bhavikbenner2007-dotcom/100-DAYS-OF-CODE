#include <stdio.h>

int main() {
    int a, b;

    // Taking input from the user
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
