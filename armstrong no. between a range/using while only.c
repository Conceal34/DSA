#include <stdio.h>

int power(int base, int power)
{
    int output = 1;
    for (int i = 1; i <= power; i++)
    {
        output *= base;
    }
    return output;
}

int main()
{
    int i = 1;
    while (i < 10000)
    {
        int count = 0, ld, sum = 0;
        int n = i;    // for finding the digits
        int temp = i; // for calcs.
        while (n != 0)
        {
            n /= 10;
            count++;
        }
        while (temp != 0)
        {
            ld = temp % 10;
            temp /= 10;
            sum += power(ld, count);
        }
        if (sum == i)
        {
            printf("%d ", sum);
        }
        i++;
    }
}