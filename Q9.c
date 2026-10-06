#include <stdio.h>
#include <math.h>

int isPrime(int x) {
    if (x <= 1) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int nextPrime(int n) {
    if (n < 2) return 2;
    int candidate = n + 1;
    while (!isPrime(candidate)) {
        candidate++;
    }
    return candidate;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", nextPrime(n));
    return 0;
}
