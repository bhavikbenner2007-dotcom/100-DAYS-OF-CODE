#include <stdio.h>

enum Months {
    JANUARY = 31,
    FEBRUARY = 28,   // ignoring leap year for simplicity
    MARCH = 31,
    APRIL = 30,
    MAY = 31,
    JUNE = 30,
    JULY = 31,
    AUGUST = 31,
    SEPTEMBER = 30,
    OCTOBER = 31,
    NOVEMBER = 30,
    DECEMBER = 31
};

int main() {
    printf("Days in January: %d\n", JANUARY);
    printf("Days in February: %d\n", FEBRUARY);
    printf("Days in March: %d\n", MARCH);
    printf("Days in April: %d\n", APRIL);
    printf("Days in May: %d\n", MAY);
    printf("Days in June: %d\n", JUNE);
    printf("Days in July: %d\n", JULY);
    printf("Days in August: %d\n", AUGUST);
    printf("Days in September: %d\n", SEPTEMBER);
    printf("Days in October: %d\n", OCTOBER);
    printf("Days in November: %d\n", NOVEMBER);
    printf("Days in December: %d\n", DECEMBER);

    return 0;
}