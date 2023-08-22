#include <stdio.h>
#include <limits.h>
int max(int a, int b)
{
    int mx;
    if (a > b)
    {
        mx = a;
    }
    else
    {
        mx = b;
    }
    return mx;
}
int main()
{
    // maximum of the elements of an array
    // inputs
    int n;
    printf("input the size: ");
    scanf("%d", &n);
    int arra[n];
    printf("input the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    // program
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arra[i]);
        printf("%d ", mx);
    }
    
}