#include <stdio.h>

int main()
{
    int num1, num2, sum = 0, i;
    printf("input the starting  no.  ");
    scanf("%d", &num1);
    printf("input the ending no.  ");
    scanf("%d", &num2);
    for (i = num1; i <= num2; i++)
    {
        sum += i;
    }
    printf("sum in between of these no. is %d", sum);
}