#include <stdio.h>
int sSort(int n, int arra[n])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int x = i + 1; x < n; x++)
        {
            if (arra[i] > arra[x])
            {
                int temp = arra[i];
                arra[i] = arra[x];
                arra[x] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arra[i]);
    }
}
int bSort(int n, int arra[n])
{
    int count = 1;
    while (count <= n - 1)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arra[i] > arra[i + 1])
            {
                int temp = arra[i];
                arra[i] = arra[i + 1];
                arra[i + 1] = temp;
            }
        }
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arra[i]);
    }
}
int iSort(int n, int arra[n])
{
    for (int i = 1; i < n; i++)
    {
        int current = arra[i];
        int j = i - 1;
        while (arra[j] > current && j >= 0)
        {
            arra[j + 1] = arra[j];
            j--; 
        }
        arra[j + 1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arra[i]);
    }
}
int main()
{
    int n;
    printf("input the size: ");
    scanf("%d", &n);

    int arra[n];
    printf("input the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    printf("%d\n", sSort(n, arra));
    printf("%d\n", bSort(n, arra));
    printf("%d\n", iSort(n, arra));
}