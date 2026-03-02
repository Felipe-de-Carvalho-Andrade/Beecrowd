#include <stdio.h>

int main() {
    int T, r1, r2;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &r1, &r2);

        printf("%d\n", r1 + r2);
    }

    return 0;
}