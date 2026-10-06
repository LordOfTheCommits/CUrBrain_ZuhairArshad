#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countPrimes(int n) {
    if (n <= 2) return 0;

    int *isPrime = (int*)malloc(n * sizeof(int));
    memset(isPrime, 1, n * sizeof(int));
    isPrime[0] = isPrime[1] = 0; 
    
    for (int p = 2; p * p < n; p++) {
        if (isPrime[p]) {
            for (int multiple = p * p; multiple < n; multiple += p) {
                isPrime[multiple] = 0;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) count++;
    }

    free(isPrime);
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countPrimes(n));
    return 0;
}
