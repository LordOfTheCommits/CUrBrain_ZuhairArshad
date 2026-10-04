#include <stdio.h>
int palimdromeOrSum(int n)
{
    int z = n;
    int rev = 0;
    while (n != 0)
    {
        int x = n % 10;
        rev = rev * 10 + x;
        n = n / 10;
    }

    if (rev == z && z >= 0)
        return z;
    else
    {
        return z + rev;
    }
}
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int result = palimdromeOrSum(n);
    printf("%d", result);
    return 0;
}