#include <stdio.h>

int main() {
    int N, i, j, M[10][10];

    scanf("%d", &N);

    while (N > 0) {
        for (i = 0; i < 9; i += 2) {
            for (j = 0; j <= i + 1; j += 2) {
                scanf("%d", &M[i][j]);
            }
        }
        for (i = 0; i < 8; i += 2) {
            for (j = 0; j <= i + 1; j += 2) {
                M[i+2][j+1] = (M[i][j] - M[i+2][j] - M[i+2][j+2]) / 2;
                M[i+1][j+1] = M[i+2][j+2] + M[i+2][j+1];
                M[i+1][j] = M[i+2][j+1] + M[i+2][j];
            }
        }

        for (i = 0; i < 9; i++) {
            for (j = 0; j < i + 1; j++) {
                printf("%d", M[i][j]);
                if (i != j) {
                    printf(" ");
                }
                
            }
            printf("\n");
        }

        N--;
    }

    return 0;
}