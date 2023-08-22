#include <stdio.h>

int main()
{
    int num;
    printf("input the no. for the stars");
    scanf("%d", &num);
    // logic
    for (int y = 1; y <= num; y++)
    {
        for (int x = 1; x <= num; x++)
        {
            if(x<=y)
            {
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}