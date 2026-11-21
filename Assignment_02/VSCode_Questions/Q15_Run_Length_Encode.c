#include <stdio.h>

int main()
{
    char str[1000];

    scanf("%999s", str);

    int count = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }

    printf("\n");

    return 0;
}
