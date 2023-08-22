#include <stdio.h>

int main()
{
    int num;
    printf("input a no. \n");
    scanf("%d", &num);
    // logic
    for (int y = 1; y <= num; y++)
    {
        // space
        for (int s = 1; s <= num - y; s++)
        {
            printf(" ");
        }
        // first stars block
        for (int j = 1; j <= y; j++)
        {
            printf("*");
        }
        // second stars block
        for (int k = 2; k <= y; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = num; i >= 1; i--)
    {
        for (int s = 1; s <= num - i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int k = 2; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}