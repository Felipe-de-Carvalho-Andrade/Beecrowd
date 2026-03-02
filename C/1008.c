#include <stdio.h>

int main() {
    int f, h;
    double ht, s;

    scanf("%d %d %lf", &f, &h, &ht);

    s = h * ht;

    printf("NUMBER = %d\n", f);
    printf("SALARY = U$ %.2lf\n", s);

    return 0;
}