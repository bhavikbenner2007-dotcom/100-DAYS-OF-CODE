#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    int max_sum = 0;
    for(int i = 0; i < k; i++)
        max_sum += arr[i];

    int current_sum = max_sum;
    for(int i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];
        if(current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("%d\n", max_sum);
    return 0;
}