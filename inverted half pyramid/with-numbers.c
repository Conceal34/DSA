#include <stdio.h>

int main()
{
    int num;
    printf("input a no. \n");
    scanf("%d", &num);
    // logic
    for (int y = num; y >= 1; y--)
    {
        for (int x = 1; x<=y; x++)
        {
            printf("%d ",x);
        }
        printf("\n");
    }
}