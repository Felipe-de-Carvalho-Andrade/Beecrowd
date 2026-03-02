#include <stdio.h>

int main() {
    int N, x, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        
        scanf("%d", &x);

        if (x % 2 == 0 && x > 0) {
            printf("EVEN POSITIVE\n");
        }
        else if (x % 2 == 0 && x < 0) {
            printf("EVEN NEGATIVE\n");
        }
        else if (x % 2 == 1 && x > 0) {
            printf("ODD POSITIVE\n");
        }
        else if ((x % 2 == -1 || x % 2 == 1) && x < 0) {
            printf("ODD NEGATIVE\n");
        }
        else {
            printf("NULL\n");
        }
    }

    return 0;
}