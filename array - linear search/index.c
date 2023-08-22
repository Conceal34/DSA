#include <stdio.h>

int linearSearch (int n, int arra[], int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arra[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("input the no. of items of array: ");
    scanf("%d", &n);

    int arra[n];
    printf("input the no. values of items of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }

    int key;
    printf("input the value that u want to find: ");
    scanf("%d", &key);
    
    printf("%d", linearSearch(n, arra, key));
}