#include <stdio.h>
int main()
{
    int a, b, i, j, temp, x, y;
    scanf("%d %d", &a, &b);
    y=b;
    int A[a];
    for (i=0; i<a; ++i)
        scanf("%d", &A[i]);
    for (i=0;i<a-1; ++i)
    {
        for (j=i+1;j< a; ++j)
        {
            if (A[j] > A[i])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }

    for (i=b;i<a;++i)
    {
        if (A[b-1]==A[i])
            ++y;
    }
    printf("%d\n", y);

    return 0;
}
