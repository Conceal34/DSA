#include<stdio.h>

typedef struct complex
{
    int real;
    int img; // imaginary.
} comp;

int main()
{
    comp c1 = {10, 11};
    comp *ptr = &c1;
    printf("%d + %di", ptr->real, ptr->img);
}