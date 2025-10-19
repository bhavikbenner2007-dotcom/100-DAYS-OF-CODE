#include <stdio.h>

int main() {
    int num, prod = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        int d = num % 10;
        if (d % 2 == 1)
            prod *= d;
        num /= 10;
    }

    printf("Product of odd digits: %d\n", prod);
    return 0;
}