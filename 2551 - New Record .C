#include <stdio.h>
int main ()
{
    float medias[40];
    float x, y;
     int i,n;
    while (scanf("%d", &n) != EOF)
    {

        for (i = 1; i <= n; ++i)
            scanf("%f %f", &x, &y), medias[i] = y / x;

        printf("1\n");
        float maior = medias[1];
        for (i = 2; i <= n; ++i)
            if (medias[i] > maior)
                maior = medias[i],printf("%d\n", i);

    }

}
