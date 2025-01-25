#include <stdio.h>
int main()
{
    int i, j, a, b, temp;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        int X[a], Y[b];
        for (i = 0; i < a;i++)
            scanf("%d", &X[i]);
        for (i = 0; i < a-1; ++i)
        {
            for (j = i+1; j<a; ++j)
            {
                if (X[j] > X[i])
                {
                    temp = X[i];
                    X[i] = X[j];
                    X[j] = temp;
                }
            }
        }
        for (i = 0; i < b; ++i)
            scanf("%d", &Y[i]);
        for (i = 0; i < b; ++i)
            printf("%d\n", X[Y[i]-1]);
    }
    return 0;
}
