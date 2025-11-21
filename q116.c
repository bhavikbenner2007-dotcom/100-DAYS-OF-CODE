#include <stdio.h>

int main() {
    int n, target;
    int nums[100];
    int i, j;

    // Input size of array
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target
    scanf("%d", &target);

    // Find two indices
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    // If no solution
    printf("-1 -1\n");
    return 0;
}