#include <stdio.h>

int main() {
    long long base, power, MOD;
    scanf("%lld %lld %lld", &base, &power, &MOD);

    long long result = 1 % MOD;

    for (long long i = 0; i < power; i++) {
        result = (result * (base % MOD)) % MOD;
    }

    printf("%lld\n", result);

    return 0;
}
