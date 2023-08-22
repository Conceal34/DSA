#include <stdio.h>

int main()
{
    int num;
    printf("input a no. \n");
    scanf("%d", &num);
    // logic
    for (int y = 1; y <= num; y++)
    {
        for (int s = 1; s <= num - y; s++)
        {
            printf(" ");
        }
        for (int x = y; x >= 1; x--)
        {
            printf("%d", x);
        }
        for (int z = 2; z <= y; z++)
        {
            printf("%d", z);
        }
        printf("\n");
    }
}