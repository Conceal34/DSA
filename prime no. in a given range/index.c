#include <stdio.h>

int main()
{
    int num1, num2, x;
    printf("input the range no. with space in between \n");
    scanf("%d %d", &num1, &num2);
    // logic
    for (int i = num1; i <= num2; i++)
    {
        for (x = 2; x<i; x++)
        {
            if(i % x == 0)
            {
                break;
            }
        }
        if(x == i)
        {
            printf("%d  ",i);
        }
    }
}