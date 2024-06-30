#include <stdio.h>
int main()

{
    int i, j, n, x, y, count=0;

    while (scanf("%d %d", &x, &y) != EOF)
    {
        int A[x][y];

        for (i=0; i<x; ++i)
        {
            for (j=0; j<y; ++j)
                scanf("%d", &A[i][j]);
        }

        for (i=0; i<x; ++i)
        {
            for (j=0; j<y; ++j)
            {
                if (A[i][j]==1)
                    A[i][j]=9;
            }
        }

        for (i=0; i<x; ++i)
        {
            for (j=0; j<y; ++j)
            {
                if (A[i][j]==0)
                {
                    if (i==0 || i==x-1 || j==0 || j==y-1)
                    {
                        if (i==0 && j==0)
                        {
                            if (A[i][j+1]==9)
                            count++;

                            if (A[i+1][j]==9)
                            count++;

                            A[i][j]=count;
                            count=0;
                        }

                        else if (i==0 && j==y-1)
                        {
                            if (A[i][j-1]==9)
                            count++;

                            if (A[i+1][j]==9)
                            count++;

                            A[i][j]=count;
                            count=0;
                        }

                        else if (i==x-1 && j==0)
                        {
                            if (A[i][j+1]==9)
                            count++;

                            if (A[i-1][j]==9)
                            count++;

                            A[i][j]=count;
                            count=0;
                        }

                        else if (i==x-1 && j==y-1)
                        {
                            if (A[i][j-1]==9)
                            count++;

                            if (A[i-1][j]==9)
                            count++;

                            A[i][j]=count;
                            count=0;
                        }

                        else if (i==x-1)
                        {
                            if (A[i][j+1]==9)
                                count++;

                            if (A[i][j-1]==9)
                                count++;

                            if (A[i-1][j]==9)
                                count++;

                            A[i][j]=count;
                            count=0;
                        }

                        else if (i==0)
                        {
                            if (A[i][j+1]==9)
                                count++;

                            if (A[i][j-1]==9)
                                count++;

                            if (A[i+1][j]==9)
                                count++;

                           A[i][j]=count;
                            count=0;
                        }

                        else if (j==y-1)
                        {
                            if (A[i][j-1]==9)
                                count++;

                            if (A[i+1][j]==9)
                                count++;

                            if (A[i-1][j]==9)
                                count++;

                            A[i][j]=count;
                            count=0;
                        }

                        else if (j==0)
                        {
                            if(A[i][j+1]==9)
                                count++;

                            if (A[i+1][j]==9)
                                count++;

                            if (A[i-1][j]==9)
                                count++;

                           A[i][j]=count;
                            count=0;
                        }
                    }

                    else
                    {
                        if (A[i][j+1]==9)
                            count++;

                        if (A[i][j-1]==9)
                            count++;

                        if (A[i+1][j]==9)
                            count++;

                        if (A[i-1][j]==9)
                            count++;

                        A[i][j]=count;
                        count=0;
                    }
                }
            }
        }

        for (i=0; i<x; ++i)
        {
            for (j=0; j<y; ++j)
            {
                if (j==y-1)
                    printf("%d\n", A[i][j]);

                else
                    printf("%d", A[i][j]);
            }
        }
    }

    return 0;
}
