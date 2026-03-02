#include <stdio.h>

int main() {
    double M[12][12], soma = 0.0;
    int i, j;
    char O;

    scanf("%c", &O);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    
    for (int x = 0, i = 0; i <= 4; i++, x++) {
        for (j = 1 + x; j <= 10 - x; j++) {
            soma += M[i][j];
        }
    }

    if (O == 'S') {
        printf("%.1lf\n", soma);
    }
    else {
        printf("%.1lf\n", soma / 30.0);
    }
    
    return 0;
}