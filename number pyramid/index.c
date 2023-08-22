#include <stdio.h>

int main()
{
    int num;
    printf("input a  no.\n");
    scanf("%d", &num);
    // logic
    for (int y = 1; y <= num; y++)
    {
        for (int s = 1; s <= num - y; s++)
        {
            printf(" ");
        }
        for (int x = 1; x <= y; x++)
        {
            printf("%d ", x);
        }
        printf("\n");
    }
}