#include <stdio.h>
#include <ctype.h>  // for toupper, tolower

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer than gets()

    // Convert to sentence case
    for(int i = 0; str[i] != '\0'; i++) {
        if(i == 0) {
            str[i] = toupper(str[i]); // first letter uppercase
        } else {
            str[i] = tolower(str[i]); // rest lowercase
        }
    }

    printf("Sentence case: %s\n", str);
    return 0;
}