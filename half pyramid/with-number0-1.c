#include <stdio.h>

int main()
{
    int num;
    printf("input a no.");
    scanf("%d", &num);
    // logic
    for (int y = 1; y <= num; y++)
    {
        for (int x = 1; x <= y; x++)
        {
            if((x+y)%2 == 0)
            {
                printf("1 ");
            }else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}