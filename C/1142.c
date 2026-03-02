#include <stdio.h>

int main() {
    int x, i = 0;
    int a = -3, b = -2, c = -1;

    scanf("%d", &x);

    while (i <=  x) {
        printf("%d %d %d PUM\n", a += 4, b += 4, c += 4);

        i++;
    }

    return 0;
}