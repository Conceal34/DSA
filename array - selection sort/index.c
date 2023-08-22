#include <stdio.h>

int main()
{
    int n;
    printf("input length of array: ");
    scanf("%d", &n);

    int arra[n];
    printf("input values of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int x = i + 1; x < n; x++)
        {
            if (arra[i] > arra[x]) // just reverse the sign for the descendeing order.`
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