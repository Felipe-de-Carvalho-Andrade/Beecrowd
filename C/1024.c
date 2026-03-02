#include <stdio.h>
#include <string.h>

int main() {
    int N, i, j;
    char M[256];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        int qtd;
        char c;
        
        scanf("%s", &M);
        qtd = strlen(M);

        for (j = 0; j < qtd; j++) {
            M[j] += 3;
        }

        for (j = 0; j < qtd/2; j++) {
            c = M[j];
            M[j] = M[qtd-1-j];
            M[qtd-1-j] = c;
        }

        if (qtd % 2 == 0) {
            for (j = qtd/2 - 1; j < qtd/2; j++) {
                M[j] -= 1;
            }
            
        }
        else {
            for (j = qtd/2; j < qtd/2 + 1; j++) {
                M[j] -= 1;
            }
            
        }
        printf("%s\n", M);
    }
    


    return 0;
}