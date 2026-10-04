#include <stdio.h>
#include <string.h>

void replaceEvenDigitsWithZero(char *numStr) {
    for (int i = 0; numStr[i] != '\0'; i++) {
        int digit = numStr[i] - '0';
        if (digit % 2 == 0) {
            numStr[i] = '0';
        }
    }
}

int main(void) {
    char numStr[100];

    printf("Enter a number: ");
    scanf("%s", numStr);

    replaceEvenDigitsWithZero(numStr);
    printf("%s is the expected output\n", numStr);

    return 0;
}
