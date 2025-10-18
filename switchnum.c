#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter a value for a: ");
    scanf("%d", &a);

    printf("enter a value for b: ");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;

    printf("after swapping using third vairable value of a is %d and b is %d", a,b);
    return 0;
}