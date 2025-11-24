#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int visited[1000] = {0}; // assuming elements are < 1000

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(visited[arr[i]] == 1) {
            printf("Repeated element is: %d\n", arr[i]);
            return 0; // exit after finding
        }
        visited[arr[i]] = 1;
    }

    return 0;
}