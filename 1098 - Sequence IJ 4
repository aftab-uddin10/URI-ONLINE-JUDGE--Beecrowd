#include <stdio.h>

int main() {
    float i = 0;
    float j = 1;

    while (i <= 2.2) {
        if ((i > 0 && i < 1) || (i > 1 && i < 2) || (i > 2.1 && i <= 2.2)) {
            printf("I=%.1f J=%.1f\n", i, j + i);
            printf("I=%.1f J=%.1f\n", i, j + 1 + i);
            printf("I=%.1f J=%.1f\n", i, j + 2 + i);
        } else {
            printf("I=%d J=%d\n", (int)i, (int)(j + i));
            printf("I=%d J=%d\n", (int)i, (int)(j + 1 + i));
            printf("I=%d J=%d\n", (int)i, (int)(j + 2 + i));
        }
        i += 0.2;
    }

    return 0;
}
