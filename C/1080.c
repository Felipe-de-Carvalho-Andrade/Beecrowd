#include <stdio.h>

int main() {
    int i, N, maior = 0, temp = 1, pos;

    for (i = 0; i < 100; i++) {
        
        scanf("%d", &N);

        if (N > maior) {
            maior = N;
            pos = temp;
        }
        
        temp++;
    }
    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}