#include <stdio.h>
int main() {
    int a[100], n, pos, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter position and number to insert: ");
    scanf("%d %d", &pos, &num);
    for(int i=n; i>=pos; i--)
        a[i] = a[i-1];
    a[pos-1] = num;
    n++;
    printf("Array after insertion: ");
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}
