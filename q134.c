#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    s = SUCCESS;
    if (s == SUCCESS) {
        printf("Operation completed successfully!\n");
    }

    s = FAILURE;
    if (s == FAILURE) {
        printf("Operation failed. Please try again.\n");
    }

    s = TIMEOUT;
    if (s == TIMEOUT) {
        printf("Operation timed out. Check your connection.\n");
    }

    return 0;
}