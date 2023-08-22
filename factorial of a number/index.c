#include <stdio.h>

int main()
{
    int num, factorial = 1;
    printf("input the no. \n");
    scanf("%d", &num);
    // logic
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    printf("factorial of %d is %d", num, factorial);
}