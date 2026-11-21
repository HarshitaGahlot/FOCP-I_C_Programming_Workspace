#include <stdio.h>

int rectangleArea(int length, int width)
{
    int area = length * width;

    return area;
}

int main()
{
    int length, width;

    scanf("%d %d", &length, &width);

    printf("%d\n", rectangleArea(length, width));

    return 0;
}
