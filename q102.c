#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            result = mid;      // possible ceil
            high = mid - 1;    // try to find smaller index
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 4, 6, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;

    int index = findCeil(arr, n, x);
    printf("%d\n", index);

    return 0;
}