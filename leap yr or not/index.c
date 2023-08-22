#include<stdio.h>

int main()
{
    int num;
    printf("input the yr.");
    scanf("%d", &num);
    if(num % 4 == 0)
    {
        if( num % 100 ==  0)
        {
            if(num % 400 == 0)
            {
                printf("a leap year.");
            }else
            {
                printf("not a leap year.");
            }
        }else
        {
            printf("leap year.");
        }
    }else
    {
        printf("not a leap year.");
    }
}