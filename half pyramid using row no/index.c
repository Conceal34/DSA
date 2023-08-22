#include <stdio.h>

int main()
{
    int num;
    printf("input a no. \n");
    scanf("%d", &num);
    // logic
    for (int y = 1; y <= num; y++)
    {
        for (int x = 1; x <= y; x++)
        {
            printf("%d", y);
        }
        printf("\n");
    }
}