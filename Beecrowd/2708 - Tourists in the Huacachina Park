#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, sum, x=0,y=0, z=0,p=0;
   char A[10];
    int n;
    while (1)
    {
        scanf("%s",A);
        if (strcmp(A,"ABEND") ==0)
            break;
        scanf("%d",&n);
        if (strcmp(A, "SALIDA") == 0)
        {
            x++;
            z+=n;
        }
        else if (strcmp(A, "VUELTA") ==0)
        {
            y++;
            p+=n;
        }
    }

    printf("%d\n%d\n", z-p, x-y);

    return 0;
}

