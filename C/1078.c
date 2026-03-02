#include <stdio.h>

int main() {
    int N, i, t = 1, r;

    scanf("%d", &N);

    for (i = 0; i < 10; i++, t++) {
        
        r = N * t;
        printf("%d x %d = %d", t, N, r);

    }
    
    return 0;
}