#include <stdio.h>

int main()
{
    int n;
    printf("input the size of the list: ");
    scanf("%d",&n);
    printf("input the elements of the list: ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("output the of the list: ");
    for (int x = 0; x < n; x++)
    {
        printf("%d ",arr[x]);;
    }
    
    
}