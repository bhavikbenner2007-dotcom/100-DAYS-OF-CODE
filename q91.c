#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char *str) {
    int i, j = 0;
    char result[strlen(str) + 1];
    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    strcpy(str, result);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    removeVowels(str);
    printf("String without vowels: %s\n", str);
    return 0;
}
