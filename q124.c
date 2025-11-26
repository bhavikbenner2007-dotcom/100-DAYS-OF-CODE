#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;
    char source[100], destination[100];
    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", destination);
    src = fopen(source, "r");
    if (src == NULL) {
        printf("Source file not found\n");
        return 0;
    }
    dest = fopen(destination, "w");
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied successfully\n");
    fclose(src);
    fclose(dest);
    return 0;
}