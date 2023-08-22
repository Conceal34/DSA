#include <stdio.h>

int octalToDecimal(int n)
{
    int lastdigit, formula = 0, base = 1;
    while (n > 0)
    {
        lastdigit = n % 10;
        n = n / 10;
        formula += lastdigit * base;
        base *= 8;
    }
    return formula;
}

int main()
{
    int num;
    printf("input an octal no : ");
    scanf("%d", &num);
    // int answer = octalToDecimal(num);
    printf("%d", octalToDecimal(num));
}