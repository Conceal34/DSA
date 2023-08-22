#include <stdio.h>

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

    // insertion sort
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