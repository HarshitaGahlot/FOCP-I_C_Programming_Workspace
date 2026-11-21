#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;

        a = b;
        b = remainder;
    }

    return a;
}

int countRelativelyPrime(int n, int m)
{
    int count = 0;

    for (int x = 1; x <= m; x++)
    {
        if (gcd(x, n) == 1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    printf("%d\n", countRelativelyPrime(n, m));

    return 0;
}
