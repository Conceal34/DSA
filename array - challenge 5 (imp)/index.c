#include <Stdio.h>

    //this method does not satisy the time and space complexity that is required acc. to the question
int main()
{
    // find the element that repeats in an array that  has the smallest index.
    int n;
    scanf("%d", &n);
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    // algorithm
    for (int i = 0; i < n - 1; i++)
    {
        for (int x = i+1; x < n; x++)
        {
            if (arra[i] == arra[x])
            {
                printf("the element that repeats is\n%d \nand its 1st index is\n%d", arra[i], i);
                return 0;
            }
        }
    }
}
