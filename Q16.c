#include <stdio.h>

int secondHighestUnique(int arr[], int n)
{
    if (n < 2)
        return -1;

    int largest = -1;
    int secondLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    int n;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter scores: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = secondHighestUnique(arr, n);

    printf("Second highest unique score = %d\n", result);

    return 0;
}