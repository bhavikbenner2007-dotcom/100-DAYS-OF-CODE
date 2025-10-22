#include <stdio.h>

int mostFrequentDigit(int num) {
    int count[10] = {0};
    num = num < 0 ? -num : num; // Handle negative numbers

    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    int max = 0, digit = 0;
    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            digit = i;
        }
    }
    return digit;
}

int main() {
    int number = 1223334444;
    printf("Most frequent digit: %d\n", mostFrequentDigit(number));
    return 0;
}