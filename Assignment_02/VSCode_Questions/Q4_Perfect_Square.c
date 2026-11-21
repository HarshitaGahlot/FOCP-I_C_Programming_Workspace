#include <stdio.h>

int isPerfectSquare(long long n)
{
    if (n == 0)
    {
        return 1;
    }

    for (long long i = 1; i <= n / i; i++)
    {
        if (i * i == n)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    long long n;

    scanf("%lld", &n);

    printf("%d\n", isPerfectSquare(n));

    return 0;
}
