#include <stdio.h>

        int gcd(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        else
        {
            return gcd(b, a % b);
        }
    }

    int main()
    {
        int n;
        printf("Enter number of elements: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter %d integers: ", n);
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);}
        int result = arr[0];{
        for (int i = 1; i < n; i++)
            result = gcd(result, arr[i]);}

        printf("GCD of array elements %d\n", result);
        return 0;
    }
