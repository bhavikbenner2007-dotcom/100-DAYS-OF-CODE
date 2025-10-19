#include <stdio.h>

int main() {
    int a, b, remainderHolder;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    
    while (b != 0) {
        remainderHolder = b;
        b = a % b;
        a = remainderHolder;
    }

    printf("HCF (GCD) is: %d\n", a);

    return 0;
}