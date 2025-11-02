#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    char *words[10];
    int count = 0;

    char *token = strtok(name, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%c.", words[i][0]);
    }

    printf("%s", words[count - 1]);

    return 0;
}
