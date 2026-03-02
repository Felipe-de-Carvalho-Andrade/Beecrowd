#include <stdio.h>

int main() {
    double vm, space, litros;
    int t;

    scanf("%d %lf", &t, &vm);

    space = vm * t;

    litros = space / 12;

    printf("%.3lf\n", litros);

    return 0;
}