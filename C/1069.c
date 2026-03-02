#include <stdio.h>
#include <string.h>

int main() {
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char string[1001];

        scanf("%s", string);

        int qtdDiamantes = 0, qtdAberturas = 0;

        for (int j = 0; j < strlen(string); j++) {
            if (string[j] == '<') {
                qtdAberturas++;
            } 
            else if (string[j] == '>' && qtdAberturas > 0) {
                qtdDiamantes++;
                qtdAberturas--;
            }
        }

        printf("%d\n", qtdDiamantes);
    }

    return 0;
}
