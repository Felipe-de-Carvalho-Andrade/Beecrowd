#include <stdio.h>

int main() {
    double N, pos = 0, media, i, soma = 0;

    for (i = 0; i < 6; i++) {
        
        scanf("%lf", &N);

        if (N > 0) {
            pos++;
            soma += N;
        }
        
    }
    
    media = soma / pos;

    printf("%.0lf valores positivos\n", pos);
    printf("%.1lf\n", media);

    return 0;
}