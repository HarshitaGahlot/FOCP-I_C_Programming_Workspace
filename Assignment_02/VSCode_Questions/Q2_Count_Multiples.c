#include <stdio.h>

int countMultiples(int n, int k)
{
    int count = n / k;

    return count;
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    printf("%d\n", countMultiples(n, k));

    return 0;
}
