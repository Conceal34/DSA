#include <stdio.h>

int main()
{
    int num1, num2, sum, temp, lastDigit;
    printf("input first no. \n");
    scanf("%d", &num1);
    printf("input second no. \n");
    scanf("%d", &num2);
    // logic
    for (int i = num1; i <= num2; i++)
    {
        sum = 0;
        temp = i;
        while (temp > 0)
        {
            lastDigit = temp % 10;
            temp /= 10;
            sum += (lastDigit * lastDigit * lastDigit);
        }
        // printf("%d ",lastDigit);
        // printf("%d \n",sum);
        if(i == sum)
        {
            printf("%d ", sum);
        }
    }
}