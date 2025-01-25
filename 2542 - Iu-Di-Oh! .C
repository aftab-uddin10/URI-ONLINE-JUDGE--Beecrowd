#include <stdio.h>
int main()
{
    int n, m, l, i, j, c1, c2, a, x, y;
    while (scanf("%d %d %d", &n, &m, &l) != EOF)
    {
    int A[m][n], B[l][n];
    for (i=0; i<m; ++i)
    {
        for (j =0; j<n; ++j)
            scanf("%d", &A[i][j]);
    }
    for (i =0; i <l; ++i)
    {
        for (j = 0; j < n; ++j)
            scanf("%d", &B[i][j]);
    }
    scanf("%d %d %d", &c1, &c2, &a);
    x=A[c1-1][a-1];
    y=B[c2-1][a-1];
    if (x > y)
        printf("Marcos\n");
    else if (y > x)
        printf("Leonardo\n");
    else
        printf("Empate\n");
    }

    return 0;
}
