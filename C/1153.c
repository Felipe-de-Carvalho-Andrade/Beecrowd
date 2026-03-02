#include <stdio.h>

int main() {
    int N, f = 1;

    scanf("%d", &N);

    while (N > 0) {
        
        f *= N;

        N = N - 1;
    }
    
    printf("%d\n", f);

    return 0;
}