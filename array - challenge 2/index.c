#include <stdio.h>

int main()
{
    // sum of the sub arrays of an array.
    //inputs
    int n;
    scanf("%d", &n);
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    //algorithm
    for (int i = 0; i < n - 1; i++)
    {
        int sum = 0;
        for (int x = i; x < n; x++)
        {
            sum += arra[x];
            printf("%d ", sum);
        }
    }
}