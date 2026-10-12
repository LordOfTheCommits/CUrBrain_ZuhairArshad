#include <stdio.h>

#define MOD 1000000007LL

long long modularSum(long long arr[], int n) {
    long long result = 0;

    for (int i = 0; i < n; i++) {
        result = (result + arr[i]) % MOD;
    }

    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    long long arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    printf("%lld\n", modularSum(arr, n));

    return 0;
}