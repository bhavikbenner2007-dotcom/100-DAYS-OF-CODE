#include <stdio.h>

enum Menu { ADD = 10, SUBTRACT, MULTIPLY };

int main() {
    int choice, a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nMenu:\n");
    printf("%d. ADD\n", ADD);
    printf("%d. SUBTRACT\n", SUBTRACT);
    printf("%d. MULTIPLY\n", MULTIPLY);

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result = %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}