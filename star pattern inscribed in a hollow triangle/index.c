#include <stdio.h>

int main()
{
    int num;
    printf("input a no. \n");
    scanf("%d", &num);
    // logic
    for (int y = 1; y <= num; y++)
    {
        for (int j = 1; j <= num - y; j++)
        {
            printf("*");
        }
        for (int x = 1; x <= 2 * y - 1; x++)
        {
            if (x == 1 || x == 2 * y - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 1; j <= num - y; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int y = num; y >= 1; y--)
    {
        for (int x = 1; x <= num - y; x++)
        {
            printf("*");
        }
        for (int s = 1; s <= 2 * y - 1; s++)
        {
            if (s == 1 || s == 2 * y - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int x = 1; x <= num - y; x++)
        {
            printf("*");
        }
        printf("\n");
    }
}