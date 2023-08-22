#include <Stdio.h>
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

    // finding the max length of sub array with the common difference of the elements.
    int n;
    scanf("%d", &n);

    int arra[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    // algorithm
    int pd = arra[1] - arra[0]; // pd = previousDifference
    int ans = 2;
    int mxLength = 2;
    int j = 2;
    while (j < n)
    {
        if (pd == (arra[j] - arra[j - 1]))
        {
            mxLength++;
        }
        else
        {
            pd = arra[j] - arra[j - 1];
            mxLength = 2;
        }
        ans = max(ans, mxLength);
        j++;
    }
    printf("%d", ans);
}