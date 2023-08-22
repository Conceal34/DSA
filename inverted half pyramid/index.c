#include <stdio.h>

int main()
{
    int num;
    printf("input a no.");
    scanf("%d", &num);
    for (int y = num; y >= 1; y--)
    {
        for (int x = 1; x <= y; x++)
        {
            printf("*");
        }
        printf(" \n");
    }
}