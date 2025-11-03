#include <stdio.h>
#include <string.h>

int main() {
    char date[] = "3/11/2025";
    char day[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';
    printf("%s-Apr-%s\n", day, year);
    return 0;
}