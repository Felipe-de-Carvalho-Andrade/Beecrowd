#include <stdio.h>

int main() {
    int i, qtd, x;

    i = 1;
    x = 0;

    while (i <= 5) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            qtd++;
        }

        i++;
    }
    printf("%d valores pares\n", qtd);

    return 0;
}