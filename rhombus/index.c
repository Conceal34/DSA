#include <stdio.h>

int main()
{
    int num;
    printf("input the no.");
    scanf("%d", &num);
    //logic
    for(int y = 1; y<=num; y++)
    {
        for(int s  = 1; s<=num-y; s++)
        {
            printf(" ");
        }
        for(int x = 1; x<=num; x++)
        {
            printf("*");
        }
        printf("\n");
    }
}