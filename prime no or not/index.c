#include <stdio.h>

int main()
{
    int num, i;
    printf("input a no. \n");
    scanf("%d", &num);
    // logic
    for (i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            printf("composite no.");    
            break;
        }
    }
    if(i == num)
    {
        printf("prime no.");
    }
}