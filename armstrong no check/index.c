#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, sum = 0, oldNum, cube;
    printf("input a no. \n");
    scanf("%d", &num);
    // logic
    oldNum = num;
    // cube = pow(lastDigit, 3);
    while (num > 0)
    {
        lastDigit = num % 10;
        // printf("%d  \n", lastDigit);
        // cube = pow(lastDigit, 3);
        // printf("%d  \n", cube);
        num = num / 10;
        sum += lastDigit*lastDigit*lastDigit;
    }
    // printf("%d\n", sum);
    if (oldNum == sum)
    {
        printf("is an armstrong no.");
    }
    else
    {
        printf("is not an armstrong no.");
    }
}