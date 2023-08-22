#include <stdio.h>

int decToBinary(int num)
{
    /*logic-    1. divide the decimal digit with 2.
                2. store the remainder.
                3. if decimal digit is not 1, move to the quotient.
                4. repeat it till the quotient is 1.
    */
    int remainder, ans = 0, i = 1;
    while (num > 0)
    {
        remainder = num % 2;
        num /= 2;
        ans = ans + (remainder * i);
        i *= 10;
    }
    return ans;
}

int main()
{
    int n;
    printf("input a decimal no: ");
    scanf("%d", &n);
    printf("answer is %d", decToBinary(n));
}