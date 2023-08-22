#include <stdio.h>
#include <stdlib.h>

int decToOctal(int n)
{
    int rem, ans = 0, i = 1, base = 8;
    while (n > 0)
    {
        rem = n % base;
        n /= base;
        ans += rem*i;
        i*=10;
    }
    return ans;
}

int main()
{
    int num;
    printf("input a decimal no:  ");
    scanf("%d", &num);
    printf("answer is %d", decToOctal(num));
}