#include <stdio.h>
int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Diagonal traversal:\n");
    for (int d = 0; d <= 4; d++) {
        int r = d < 3 ? 0 : d - 2;
        int c = d < 3 ? d : 2;
        while (r < 3 && c >= 0)
            printf("%d ", a[r++][c--]);
    }
    return 0;
}