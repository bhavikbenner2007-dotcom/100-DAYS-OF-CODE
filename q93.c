#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0}; // ASCII character count

    // If lengths differ, not anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count characters in both strings
    for (int i = 0; str1[i] && str2[i]; i++) {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (areAnagrams(str1, str2))
        printf("Strings are anagrams.\n");
    else
        printf("Strings are not anagrams.\n");

    return 0;
}