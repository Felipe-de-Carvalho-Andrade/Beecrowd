#include <stdio.h>

int main() {
    int cod_1, n1, cod_2, n2;
    double v1, v2;

    scanf("%d %d %lf", &cod_1, &n1, &v1);
    scanf("%d %d %lf", &cod_2, &n2, &v2);

    printf("VALOR A PAGAR: R$ %.2lf\n", (n1 * v1) + (n2 * v2));

    return 0;
}