#include <stdio.h>

int main() {
    int i, qtd;
    double x;

    i = 1;
    x = 0;

    while (i <= 6) {
        scanf("%lf", &x);
        if (x > 0)
            qtd++;

        i++;
    }
    printf("%d valores positivos\n", qtd);

    return 0;
}