#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0, inWord = 0;
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 0;
    }
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }
    if (inWord) words++;
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    fclose(fp);
    return 0;
}