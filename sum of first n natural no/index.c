#include <stdio.h>

int main()
{
    int num, i, sum = 0;
    printf("input the no. upto which u want the sum of n no. \n");
    scanf("%d",&num);
    for (i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("%d",sum);

    return 0;
}