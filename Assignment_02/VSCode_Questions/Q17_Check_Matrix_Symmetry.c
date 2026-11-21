#include <stdio.h>

int main()
{
    int n;
    int symmetric = 1;

    scanf("%d", &n);

    int matrix[n][n];

    // Read matrix elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check matrix symmetry
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if (symmetric == 0)
        {
            break;
        }
    }

    if (symmetric == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
