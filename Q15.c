#include <stdio.h>

int minAbsoluteValue(int arr[], int n)
{
    int minValue = arr[0];
    int minAbs = (arr[0] < 0) ? -arr[0] : arr[0];

    for (int i = 1; i < n; i++)
    {
        int currentAbs = (arr[i] < 0) ? -arr[i] : arr[i];

        if (currentAbs < minAbs)
        {
            minAbs = currentAbs;
            minValue = arr[i];
        }
    }

    return minValue;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Integer with smallest absolute value: %d\n",
           minAbsoluteValue(arr, n));

    return 0;
}