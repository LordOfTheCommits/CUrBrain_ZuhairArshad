#include <stdio.h>

int mostPopularItem(int arr[], int n)
{
    int maxFreq = 0, result = arr[0];

    for (int i = 0; i < n; i++)
    {
        int freq = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }

        if (freq > maxFreq)
        {
            maxFreq = freq;
            result = arr[i];
        }
        else if (freq == maxFreq && arr[i] < result)
        {
            result = arr[i];
        }
    }

    return result;
}

int main()
{
    int n;

    printf("Enter number of product IDs: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter product IDs: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", mostPopularItem(arr, n));

    return 0;
}