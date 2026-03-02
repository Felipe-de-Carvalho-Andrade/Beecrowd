#include <stdio.h>

int main() {
    int i, j, x;
    char O;
    double M[12][12], soma = 0.0;

    scanf("%c", &O);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    
    for (i = 0, x = 0; i <= 4; i++, x++) {
        for (j = 1 + x; j <= 10 - x; j++) {
            soma += M[j][i];
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