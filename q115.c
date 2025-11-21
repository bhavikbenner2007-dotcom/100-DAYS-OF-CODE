#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int freqS[26] = {0}, freqT[26] = {0};
    int i;

    // Input two strings
    scanf("%s", s);
    scanf("%s", t);

    // If lengths differ, not an anagram
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequency of each character
    for (i = 0; s[i] != '\0'; i++) {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }

    // Compare frequencies
    for (i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}