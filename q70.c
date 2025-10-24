#include <stdio.h>
int main() {
    int a[100], b[100], n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    k = k % n;
    for(int i=0; i<n; i++)
        b[(i+k)%n] = a[i];
    printf("Array after rotation: ");
    for(int i=0; i<n; i++)
        printf("%d ", b[i]);
    return 0;
}
