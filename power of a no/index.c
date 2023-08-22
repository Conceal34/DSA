#include <stdio.h>
#include <math.h>

int powerOfNumber(int b, int p)
{
    int ans = 1;
    for (int i = 1; i <= p; i++)
    {
        ans *= b;
    }
    return ans;
}

int main()
{
    int base, power;
    printf("input the base first then the power: ");
    scanf("%d%d", &base, &power);
    printf("%d", powerOfNumber(base,power));
}