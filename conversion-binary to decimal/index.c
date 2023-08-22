#include <stdio.h>
#include <math.h>

int binaryToDecimal(int n)
{
    int formula = 0;
    int lastdigit, base = 1;
    while (n > 0)
    {
        lastdigit = n % 10;
        formula += lastdigit * base;
        base *= 2;
        n /= 10;
    }
    return formula;
}

int main()
{
    int num;
    printf("input a binary no.");
    scanf("%d", &num);
    /*logic -   1. separate the last digit from the no. and deprive the no of that digit so the 2nd digit of original becomes last
                2. run a loop that runs till the no = 0.
                3. multiply 2^(loop variable) with the last digit.
                4. add these all the outputs.*/
    int ans = binaryToDecimal(num);
    printf("%d",ans);
}