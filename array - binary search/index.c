#include <stdio.h>
int binarySearch(int n, int arra[n], int key)
{
    int start = 0, end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arra[mid])
        {
            return mid;
        }
        else if (key < arra[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("input the size ");
    scanf("%d", &n);

    int arra[n];
    printf("input the items ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    
    int key;
    printf("input the key ");
    scanf("%d", &key);

    printf("%d", binarySearch(n, arra, key));
}