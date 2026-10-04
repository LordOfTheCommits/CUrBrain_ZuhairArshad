#include <stdio.h>

int reverse_and_double(int n) {
    int rev = 0;
    while (n != 0) {
        int x = n % 10;       
        rev = rev * 10 + x;   // build reversed number
        n = n / 10;           // remove last digit
    }
    return rev * 2;           // double the reversed number
}

int main() {
    int n;
    scanf("%d", &n);
    int result = reverse_and_double(n);
    printf("%d\n", result);
    return 0;
}
