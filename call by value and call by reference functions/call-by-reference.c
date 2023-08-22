#include <Stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("after swapping using call by reference function: \n");
    swap(&a,&b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}