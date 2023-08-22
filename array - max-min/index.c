#include <stdio.h>

// int maxOf2(int num1, int num2)
// {
//     if (num1 > num2)
//     {

//     }else // num2 > num1

// }

int main()
{
    int n, max, min;
    printf("input the size of array: ");
    scanf("%d", &n);
    int arra[n];
    printf("input the values of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    for (int x = 0; x < n - 1; x++)
    {
        if (arra[x] > arra[x + 1])
        {
            max = arra[x];
            min = arra[x + 1];
        }
        else // arra[x+1] > arra[x]
        {
            max = arra[x + 1];
            min = arra[x];
        }
    }
    printf("minimum value of array is %d\n", min);
    printf("maximum value of list is %d\n", max);
}