#include <stdio.h>

int main()
{
    int num;
    printf("input a no.\n");
    scanf("%d", &num);
    // logic
    for (int y = 1; y <= 3; y++)
    {
        for (int x = 1; x <= num; x++)
        {
            if ((y + x) % 4 == 0 || (y == 2 & x % 4 == 0))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}