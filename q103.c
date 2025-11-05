#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], total = 0, left = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }
    for (int i = 0; i < n; i++) {
        if (left == total - left - a[i]) {
            printf("%d\n", i);
            return 0;
        }
        left += a[i];
    }
    printf("-1\n");
    return 0;
}