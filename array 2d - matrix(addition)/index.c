#include <Stdio.h>

int scn(int m, int n, int a[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int x = 0; x < n; x++)
        {
            scanf("%d", &a[i][x]);
        }
    }
}

int display(int m, int n, int a[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int x = 0; x < n; x++)
        {
            printf("%d\t", a[i][x]);
        }
        printf("\n");
    }
}

int main()
{
    // sum two matrices
    int r, c, a, b;
    // r = rows of M1, c = cols of M1,  a = rows of M2, b = cols of M2
    printf("input rows and cols of matrix 1: ");
    scanf("%d %d", &r, &c);
    printf("input rows and cols of matrix 2: ");
    scanf("%d %d", &a, &b);

    int m1[r][c];
    int m2[a][b];
    // algorithm
    if (r == a && c == b)
    {
        printf("input the 1st matrix:\n");
        scn(r, c, m1);
        
        printf("input the 2nd matrix:\n");
        scn(r, c, m2);
        
        int sum[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int x = 0; x < c; x++)
            {
                sum[i][x] = m1[i][x] + m2[i][x];
            }
        }
        display(r,c,sum);
    }
    else
    {
        printf(" \nrows and cols are not equal. for substraction and additon rows and cols must be equal.\n");
    }
}