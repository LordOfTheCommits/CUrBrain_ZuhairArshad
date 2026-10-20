#include <stdio.h>

void printSalesAboveThreshold(int sales[], int n, int threshold) {
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (sales[i] >= threshold) {
            if (found)
                printf(" ");
            printf("%d", sales[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("[]");
    }
}

int main() {
    int n, threshold;

    scanf("%d", &n);

    int sales[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &sales[i]);
    }

    // Input threshold
    scanf("%d", &threshold);

    // Function call
    printSalesAboveThreshold(sales, n, threshold);

    return 0;
}