#include <stdio.h>
//sum of 1 to n no.
int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int num;
    printf("input a no: ");
    scanf("%d",&num);
    int output = sumN(num);
    printf("%d", output);
}