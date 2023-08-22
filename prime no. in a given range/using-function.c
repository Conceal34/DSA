#include <stdio.h>

int isPrime(int num)
{
    int j;
    for ( j = 2; j < num; j++)
    {
        if (num%j == 0)
        {
            return 0;
        }
    }
    if (j == num)
    {
        return 1;
    }
    
}

int main()
{
    int num1, num2;
    printf("input the range:  ");
    scanf("%d %d", &num1, &num2);
    //logic
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d ", i);
        }
    }
}