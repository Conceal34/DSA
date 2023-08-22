#include <stdio.h>
#include <stdbool.h>

int main()
{
    // to find the smallest positive integer in the array
    int n;
    scanf("%d", &n);
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    // algorithm
    const int N = 1e6 + 2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = 0; // false
    }
    for (int i = 0; i < n; i++)
    {
        if (arra[i] > 0)
        {
            check[arra[i]] = 1; // true
        }
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == 0)
        {
            ans = i;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}