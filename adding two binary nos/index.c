#include <stdio.h>
#include <math.h>

int binaryToDecimal(int a)
{
    int ans = 0, i = 0;
    while (a > 0)
    {
        int lastDigit;
        lastDigit = a % 10;
        a /= 10;
        ans = ans + lastDigit * pow(2, i);
        i++;
    }
    return ans;
}

int decimalToBinary(int a)
{
    int ans = 0, i = 1, remainder;
    while (a > 0)
    {
        remainder = a % 2;
        a /= 2;
        ans += remainder * i;
        i *= 10;
    }
    return ans;
}

int binaryAddn(int n1, int n2)
{
    int decN1, decN2, ansInDecimal, ans;
    decN1 = binaryToDecimal(n1);
    decN2 = binaryToDecimal(n2);
    ansInDecimal = decN1 + decN2;
    ans = decimalToBinary(ansInDecimal);
    return ans;
}

int main()
{
    int num1, num2;
    printf("input two binary no: ");
    scanf("%d%d", &num1, &num2);
    printf("%d", binaryAddn(num1, num2));
}