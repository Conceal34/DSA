#include <stdio.h>

int main()
{
    int num, lastDigit, sum = 0;
    printf("input a no.\n");
    scanf("%d", &num);
    // logic
    while (num > 0)
    {
        lastDigit = num % 10;
        sum += lastDigit;
        num = num / 10;
    }
    printf("%d", sum);
}