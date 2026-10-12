#include <stdio.h>

int hasDivisiblePrefix(int arr[], int n, int k) {
    int prefixSum = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        if (prefixSum % k == 0) {
            return 1;   // True
        }
    }

    return 0;   // False
}

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (hasDivisiblePrefix(arr, n, k))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}