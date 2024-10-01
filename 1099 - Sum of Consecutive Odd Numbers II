#include <stdio.h>

int main() {
    int n,j, x, y, A, sum;
    scanf("%d", &n);

  for(j=0;j<n;j++)  {
        scanf("%d %d", &x, &y);
        if (x > y) {
            A = x;
            x = y;
            y = A;
        }

        sum = 0;
        for (int i = x + 1; i < y; i++) {
            if (i % 2 != 0)
                sum += i;
        }

        printf("%d\n", sum);
    }

    return 0;
}
