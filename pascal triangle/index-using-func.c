#include <stdio.h>

int fact(int n)
{
    int factorial = 1;
    for(int i = 1; i<=n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int combn(int a, int b) // combn = n!/ ((n-r)! *r!)
{
    int comb = fact(a) / (fact(a-b)*fact(b));
    return comb;
}

int main()
{
    int num;
    printf("input the no.: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int m = 0; m <= num-i; m++)
        {
            printf(" ");
        }
        for (int x = 0; x <= i; x++)
        {
            printf("%d ", combn(i, x));
        }
        printf("\n");
    }
}