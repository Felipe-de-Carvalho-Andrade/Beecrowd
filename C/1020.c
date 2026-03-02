#include <stdio.h>

int main() {
    int d, m, a;

    scanf("%d", &d);

    a = d/365;
    d = d - (a * 365);
    m = d/30;
    d = d - (m * 30);

    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    return 0;
}