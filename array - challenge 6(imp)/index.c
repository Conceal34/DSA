#include <stdio.h>

int main()
{
    // give the starting and ending index when the given sum is equal to the subarray elements sum.
    int n;
    scanf("%d", &n);
    int sum;
    printf("give the sum: ");
    scanf("%d", &sum);
    printf("give the array: ");
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    // algorithms
    int s = 0, i = 0, j = 0, st = -1, en = -1;
    while (j < n && s + arra[j] <= sum)
    {
        s += arra[j];
        j++;
    }
    if (s == sum)
    {
        printf("%d %d", i, j);
        return 0;
    }
    while (j < n)
    {
        s += arra[j];
        while (s > sum)
        {
            s -= arra[i];
            i++;
        }
        if (s == sum)
        {
            st = i;
            en = j;
            break;
        }
        j++;
    }
    printf("%d %d", st, en);
}