#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter %d sorted elements:\n", m);
    for(int i=0; i<m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter %d sorted elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }

    int c[m+n];
    int i=0, j=0, k=0;

    // Merge process
    while(i<m && j<n) {
        if(a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while(i<m) {
        c[k++] = a[i++];
    }
    while(j<n) {
        c[k++] = b[j++];
    }

    printf("Merged sorted array:\n");
    for(int x=0; x<m+n; x++) {
        printf("%d ", c[x]);
    }
    return 0;
}