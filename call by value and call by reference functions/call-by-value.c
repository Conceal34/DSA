#include <Stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d \nb = %d", a, b);
}

int main()
{
    int a = 10, b = 20;
    printf("a = %d \nb = %d\n", a, b);
    printf("values after swapping using call by value function: \n");
    swap(a, b);
}