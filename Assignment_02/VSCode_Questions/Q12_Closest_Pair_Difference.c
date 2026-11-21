#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minDifference = arr[0] - arr[1];

    if (minDifference < 0)
    {
        minDifference = -minDifference;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int difference = arr[i] - arr[j];

            if (difference < 0)
            {
                difference = -difference;
            }

            if (difference < minDifference)
            {
                minDifference = difference;
            }
        }
    }

    printf("%d\n", minDifference);

    return 0;
}
