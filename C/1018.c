#include <stdio.h>

int main() {
    int v, q1, q2, q5, q10, q20, q50, q100, resto;

    scanf("%d", &v);

    resto = v;

    q100 = resto / 100;
    resto -= (q100 * 100);

    q50 = resto / 50;
    resto -= (q50 * 50);

    q20 = resto / 20;
    resto -= (q20 * 20);

    q10 = resto / 10;
    resto -= (q10 * 10);

    q5 = resto / 5;
    resto -= (q5 * 5);

    q2 = resto / 2;
    resto -= (q2 * 2);

    q1 = resto;

    printf("%d\n", v);
    printf("%d nota(s) de R$ 100,00\n", q100);
    printf("%d nota(s) de R$ 50,00\n", q50);
    printf("%d nota(s) de R$ 20,00\n", q20);
    printf("%d nota(s) de R$ 10,00\n", q10);
    printf("%d nota(s) de R$ 5,00\n", q5);
    printf("%d nota(s) de R$ 2,00\n", q2);
    printf("%d nota(s) de R$ 1,00\n", q1);

    return 0;
}