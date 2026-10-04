#include <stdio.h>
#include <stdlib.h>

int absDiffDigitFrequency(int n, int a, int b) {
    int countA = 0, countB = 0;

    // Special case: n = 0 → treat as one digit
    if (n == 0) {
        if (a == 0) countA++;
        if (b == 0) countB++;
        return abs(countA - countB);
    }

    while (n > 0) {
        int digit = n % 10;
        if (digit == a) countA++;
        if (digit == b) countB++;
        n /= 10;
    }

    return abs(countA - countB);
}

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    printf("%d\n", absDiffDigitFrequency(n, a, b));
    return 0;
}
