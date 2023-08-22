#include <stdio.h>

int main()
{
    int num, lastDigit, reverse = 0;
    printf("input a no. \n");
    scanf("%d", &num);
    // logic
    while (num > 0)
    {
        lastDigit = num % 10;
        num = num / 10;
        reverse = reverse * 10 + lastDigit;
    }
    printf("%d", reverse);
}