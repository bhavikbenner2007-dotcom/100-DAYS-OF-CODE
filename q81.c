#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int count = 0;
    while (str[count] != '\0' && str[count] != '\n') count++;
    printf("Length: %d\n", count);
    return 0;
}