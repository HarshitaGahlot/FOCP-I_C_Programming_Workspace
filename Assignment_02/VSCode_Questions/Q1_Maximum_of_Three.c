#include <stdio.h>

int maxOfThree(int a, int b, int c)
{
    int maximum = a;

    if (b > maximum)
    {
        maximum = b;
    }

    if (c > maximum)
    {
        maximum = c;
    }

    return maximum;
}

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", maxOfThree(a, b, c));

    return 0;
}
