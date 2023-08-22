#include <stdio.h>

int main()
{
    int num;
    printf("input a no: ");
    scanf("%d",&num);
    //logic
    for (int  i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            printf("%d ",i);
            num /= i;
        }
    }
    return 0;
}