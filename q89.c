#include <stdio.h>

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ch) count++;

    printf("Frequency of '%c': %d\n", ch, count);
    return 0;
}