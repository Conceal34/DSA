#include <stdio.h>

int main()
{
    int num;
    printf("input a no. for the butterfly \n");
    scanf("%d", &num);
    // logic
    for (int y = 1; y <= num; y++)
    {
        for (int i = 1; i <= y; i++)
        {
            printf("*");
        }
        int space;
        space = 2 * num - 2 * y;
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }
        for (int i = 1; i <= y; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int m = num; m >= 1; m--)
    {
        for (int l = 1; l<=m; l++)
        {
            printf("*");
        }
        int space;
        space = 2 * num - 2 * m;
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }
        for (int l = 1; l<=m; l++)
        {
            printf("*");
        }
        printf("\n");
    }
}