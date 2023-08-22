#include <stdio.h>

int main()
{
    int num;
    printf("give an input \n");
    scanf("%d", &num);
    for (int y = 1; y <= num; y++)
    {
        for (int x = 1; x <= num; x++)
        {
            if (x <= num - y)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}