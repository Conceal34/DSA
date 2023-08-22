#include <stdio.h>

int main()
{
// this code eliminates the excess amount of prime no.(which are repeated)
    int num;
    printf("input a no: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            int x;
            for (x = 2; x <i; x++)
            {
                if (i % x == 0)
                {
                    break;
                }
            }
            if (x == i)
            {
                printf("%d ",x);
            }
            
        }
    }
}