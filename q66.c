#include <stdio.h>

int main() {
    int n, i, num, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to insert: ");
    scanf("%d", &num);
    for(i = n - 1; i >= 0 && arr[i] > num; i--)
        arr[i + 1] = arr[i];
    arr[i + 1] = num;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
