#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];
    fp = fopen("example.txt", "a");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    printf("Enter a line: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);
    fclose(fp);
    return 0;
}