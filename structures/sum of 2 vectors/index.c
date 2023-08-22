#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} vec;

int main()
{
    vec v1 = {9, 1};
    vec v2 = {1, 9};
    vec sum = {0};
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("%di^ + %dj^", sum.x, sum.y);
}