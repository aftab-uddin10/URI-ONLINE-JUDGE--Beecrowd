#include <stdio.h>
int main()
{
    int a, b, i, j, x, y, z=0, c=1;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        int A[b],B[b],C[b];
        z=-1;
        c=1;
        for (i=0;i<b;++i)
        {
            scanf("%d/%d/%d", &A[i], &B[i], &C[i]);

            y=0;

            for (j=0; j<a; ++j)
            {
                scanf("%d", &x);

                if (x==1)
                    y++;
            }

            if (y==a && c)
            {
                z=i;
                c=0;
            }
        }

        if (z>=0)
            printf("%d/%d/%d\n", A[z], B[z], C[z]);

        else
            printf("Pizza antes de FdI\n");
    }

    return 0;
}

