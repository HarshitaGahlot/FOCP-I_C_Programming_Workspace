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

    int currentLength = 1;
    int maxLength = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            currentLength++;
        }
        else
        {
            currentLength = 1;
        }

        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}
