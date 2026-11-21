#include <stdio.h>

int main()
{
    int r, c;

    scanf("%d %d", &r, &c);

    int matrix[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        int sum = 0;

        for (int j = 0; j < c; j++)
        {
            sum = sum + matrix[i][j];
        }

        printf("%d", sum);

        if (i < r - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    for (int j = 0; j < c; j++)
    {
        int sum = 0;

        for (int i = 0; i < r; i++)
        {
            sum = sum + matrix[i][j];
        }

        printf("%d", sum);

        if (j < c - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
