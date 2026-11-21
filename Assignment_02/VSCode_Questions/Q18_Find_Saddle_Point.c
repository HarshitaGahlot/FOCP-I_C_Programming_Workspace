#include <stdio.h>

int main()
{
    int r, c;
    int found = 0;

    scanf("%d %d", &r, &c);

    int matrix[r][c];

    // Read matrix elements
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Search for a saddle point
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int isMinimum = 1;
            int isMaximum = 1;

            // Check whether it is minimum in its row
            for (int k = 0; k < c; k++)
            {
                if (matrix[i][k] < matrix[i][j])
                {
                    isMinimum = 0;
                    break;
                }
            }

            // Check whether it is maximum in its column
            for (int k = 0; k < r; k++)
            {
                if (matrix[k][j] > matrix[i][j])
                {
                    isMaximum = 0;
                    break;
                }
            }

            if (isMinimum == 1 && isMaximum == 1)
            {
                printf("%d %d %d\n", i, j, matrix[i][j]);
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            break;
        }
    }

    if (found == 0)
    {
        printf("None\n");
    }

    return 0;
}
