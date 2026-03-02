#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int diagonal_menor, diagonal_maior;

        scanf("%d %d", &diagonal_menor, &diagonal_maior);

        printf("%d cm2\n", ((diagonal_maior * diagonal_menor) / 2));
    }

    return 0;
}