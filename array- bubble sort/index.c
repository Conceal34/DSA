#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arra[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }

    int counter = 1;
    while (counter < n - 1)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arra[i] > arra[i + 1])
            {
                int temp = arra[i];
                arra[i] = arra[i + 1];
                arra[i + 1] = temp;
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arra[i]);
    }
    
}