#include <stdio.h>
#include <string.h>

char firstRepeatingLowercase(char *str) {
    int freq[26] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                return str[i];
            }
        }
    }
    return '\0'; // No repeating lowercase letter
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char result = firstRepeatingLowercase(str);
    if (result)
        printf("First repeating lowercase letter: %c\n", result);
    else
        printf("No repeating lowercase letter found.\n");
    return 0;
}
