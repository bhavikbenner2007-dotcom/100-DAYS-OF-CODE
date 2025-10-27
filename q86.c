#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len-1] == '\n') len--;

    int isPalin = 1;
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-1-i]) {
            isPalin = 0;
            break;
        }
    }
    printf("%s\n", isPalin ? "Palindrome" : "Not Palindrome");
    return 0;
}