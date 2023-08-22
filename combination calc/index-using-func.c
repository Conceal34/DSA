#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for(int i = 2; i<= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, r;
    printf("input the value of n and r:");
    scanf("%d%d", &n, &r);
    int numerator = factorial(n);
    int denominator = factorial(n - r) * factorial(r);
    int answer = numerator / denominator;
    printf("%d",answer);
}
