#include <stdio.h>

int main() {
    int N, x, i, in = 0, out = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        
        scanf("%d", &x);

        if (x >= 10 && x <= 20) {
            in++;
        }
        else {
            out++;
        }

    }
    
    printf("%d in\n%d out\n", in, out);

    return 0;
}