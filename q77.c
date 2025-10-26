#include <stdio.h>
int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, flag = 1;
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 3; j++)
            if (a[i][i] == a[j][j]) flag = 0;

    if (flag)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");
    return 0;
}