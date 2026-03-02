#include <stdio.h>

int main() {
    int N, s, m, h;

    scanf("%d", &N);

    h = N / 3600;
    m = (N - (3600 * h)) / 60;
    s = N - (3600 * h) - (60 * m);

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}