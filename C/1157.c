#include <stdio.h>

int main() {
    int N, div;

    scanf("%d", &N);

    for (div = 1; div != (N + 1); div++) {
        
        if (N % div == 0) {
            printf("%d\n", div);
        }
        
    }

    return 0;
}