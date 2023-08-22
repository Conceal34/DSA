#include <stdio.h>
#include <math.h>

int maxOf3(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int check(int num1, int num2, int num3)
{
    int x = maxOf3(num1, num2, num3), y, z;
    if (x == num1)
    {
        y = num2;
        z = num3;
    }else if(x == num2)
    {
        y = num1;
        z = num3;
    }else if(x == num3)
    {
        y = num1;
        z = num2;
    }
    
    if (x*x == y*y+z*z)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int main()
{
    int num1, num2, num3;
    printf("print all the sidess of a triangle with space in betwen: ");
    scanf("%d%d%d", &num1, &num2, &num3);
/*logic -   1. find the max value of 3 values. 
            2. assign the value of max to a variable.
            3. assign the rest of the 2 values to 2 other new variables.
            4. check for the formula h^2 = x^2 + y^2
            5. if true for the formula return its a triblet otherwiise not.*/
    if (check(num1, num2, num3) == 1)
    {
        printf("triplet");
    }else
    {
        printf("not a triplet");
    }
    
    return 0;
}