#include <stdio.h>

int main() {
    double M[12][12], soma = 0.0;
    int i, j, C;
    char T;

    scanf("%d", &C);
    scanf(" %c", &T);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
            if (j == C)
                soma += M[i][j];
        }
    }
    if (T == 'S')
        printf("%.1lf\n", soma);
    else if (T == 'M')
        printf("%.1lf\n", soma / 12.00);

    return 0;
}