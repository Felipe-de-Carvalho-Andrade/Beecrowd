#include <stdio.h>

int main() {
    double M[12][12], soma = 0.0;
    int i, j, x;
    char O;

    scanf("%c", &O);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    
    for (i = 1, x = 1; i < 12; i++, x++) {
        for (j = 11; j > 11 - x; j--) {
            soma += M[i][j];
        }
    }
    
    
    if (O == 'S') {
        printf("%.1lf\n", soma);
    }
    else {
        printf("%.1lf\n", soma / 66.0);
    }

    return 0;
}