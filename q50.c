#include <stdio.h>

int main() {
    int i, j, space;

    for(i = 5; i >= 1; i--) {
        // Print leading spaces
        for(space = 0; space < 5 - i; space++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}