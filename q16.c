// write a program to input three numbers and find the largest among them using if–else
#include <stdio.h>

int main() {
    int q, w, e;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &q, &w, &e);

    if (q > w && q > e) {
        printf("Q is the largest number");
    } else if (w > q && w > e) {
        printf("W is the largest number");
    } else if (e > q && e > w) {
        printf("E is the largest number");
    } else {
        printf("equal numbers");
    }

    return 0;
}