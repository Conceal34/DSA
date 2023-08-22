#include <stdio.h>
#include <limits.h>
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{

    // no of record breaking days.
    // condition 1. the day should has the maximum visitors
    // condition 2. the day's visitors should be greater than the nexxt day.
    // inputs
    int n;
    scanf("%d", &n);
    int arra[n + 1];
    arra[n] = -1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    // algorithm
    int mx = INT_MIN, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arra[i] > mx && arra[i] > arra[i + 1])
        {
            ans++;
        }
        mx = max(arra[i], mx);
    }
    printf("%d",ans);
}