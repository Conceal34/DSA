#include <stdio.h>

int main()
{
    int num;
    printf("input a number. \n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("input is positive.");
    }else
    {
        printf("input is negative.");
    }

    return 0;   
}