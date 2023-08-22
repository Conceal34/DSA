#include <stdio.h>

int main()
{
    int num, lastDigit, oldNum, reverse = 0;
    printf("input a no. \n");
    scanf("%d", &num);
    // logic
    oldNum = num;
    while (num > 0)
    {
        lastDigit = num % 10;
        num = num / 10;
        reverse = (reverse * 10) + lastDigit;
    }
    // printf("old num %d \n", oldNum);
    // printf("reeverse %d \n", reverse);
    if (oldNum == reverse)
    {
        printf("is a palindrome");
    }else
    {
        printf("is  not a palindrome");
    }
    
}