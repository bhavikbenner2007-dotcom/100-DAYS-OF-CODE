#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements (from 0 to n, one missing):\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += a[i];
    }

    int total = n*(n+1)/2;  // sum of numbers from 0 to n
    int missing = total - sum;

    printf("Missing number is: %d\n", missing);
    return 0;
}