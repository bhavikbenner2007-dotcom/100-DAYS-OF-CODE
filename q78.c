#include <stdio.h>
int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, sum = 0;
    for (int i = 0; i < 3; i++)
        sum += a[i][i];
    printf("Sum of main diagonal = %d\n", sum);
    return 0;
}