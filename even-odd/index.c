#include <stdio.h>

int main()
{
    int num;
    printf("input a number \n");
    // taking input
    scanf("%d", &num);
    // logic
    if (num % 2 == 0) // modulus gives the remainder.
    {
        printf("input is even");
    }
    else
    {
        printf("input is odd");
    }

    return 0;
}