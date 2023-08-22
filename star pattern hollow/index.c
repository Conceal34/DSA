#include <stdio.h>

int main()
{
    int num;
    printf("inpout a no.");
    scanf("%d", &num);
    // logic
    for (int x = 1; x <= num; x++)
    {
        for (int s = 1; s <= num - x; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= x; j++)
        {
            if (j == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int k = 2; k <= x; k++)
        {
            if (k == x)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int y = num; y >= 1; y--)
    {
        for (int s = 1; s <= num - y; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= y; j++)
        {
            if (j == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int k = 2; k <= y; k++)
        {
            if (k == y)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}