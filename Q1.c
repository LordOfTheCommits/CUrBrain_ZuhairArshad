#include <stdio.h>

int hasEvenDigits(int n) {
    if (n < 0) n = -n;
    if (n == 0) return 0;
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count % 2 == 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if (hasEvenDigits(n))
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
