#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[50] = "";
    char word[50];
    int maxLen = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    int i = 0, j = 0;
    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
        if (sentence[i] == '\0') break;
        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}