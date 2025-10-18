//WAP TO CHECK IF TRIANGLE IS VAILD OR NOT. AND CHECK ITS TYPE.


#include <stdio.h>

int main() {
    int a, b, c;

    printf("ENTER THE SIDES OF TRIANGLE: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) {
        if (a == b && b == c && a == c) {
            printf("THE TRIANGLE IS EQUILATERAL\n");
        } else if (a == b || b == c || a == c) {
            printf("THE TRIANGLE IS ISOSCELES\n");
        } else if ( c*c == a*a + b*b  || a*a == b*b + c*c || b*b == a*a + c*c) {
             printf("THE TRIANGLE IS RIGHTANGLED TRIANGLE\n");
        }        

    } else {
        printf("THE TRIANGLE IS NOT VALID\n");
    }

    return 0;
}
