#include <stdio.h>
#include <string.h>

int check(int a, char str[])

{
    int x;
    if (strcmp(str, "suco de laranja")==0)
         x=a*120;
    else if (strcmp(str, "morango fresco")==0)
        x=a*85;
    else if (strcmp(str, "mamao")==0)
       x=a*85;
    else if (strcmp(str, "goiaba vermelha")==0)
      x=a*70;
    else if (strcmp(str, "manga")==0)
       x=a*56;
    else if (strcmp(str, "laranja")==0)
        x=a*50;
    else if (strcmp(str, "brocolis")==0)
      x=a*34;
    return x;
}
void calculate(int x)
{
    int n;
    if (x >= 110 && x  <= 130)
        printf("%i mg\n", x);
    else if (x < 110)
    {
        n = 110-x;
        printf("Mais %i mg\n", n);
    }
    else
    {
        n = x-130;
        printf("Menos %i mg\n", n);
    }
}
int main(void)
{
    char c, str[50];
    int i, j, a, b, n;
    while (1)
    {
        scanf("%i", &n);
        b = 0;
        if (n == 0)
            break;
        for (i = 0; i < n; ++i)
        {
            scanf("%i %[^\n\r]", &a, str);
            b+=check(a, str);
        }
        calculate(b);
    }

    return 0;
}
