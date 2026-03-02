#include <stdio.h>

int main() {
    int M, N, maior, menor, cont = 0;

    while (1) {
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0) {
            break;
        }
        else {
            if (M > N) {
                maior = M;
                menor = N;
            }
            else if (N > M) {
                maior = N;
                menor = M;
            }
            
            while (menor <= maior) {
                printf("%d ", menor);
                cont += menor;
                menor++;
            }
            printf("Sum=%d\n", cont);
            
        }
        cont = 0;

    }

    return 0;
}