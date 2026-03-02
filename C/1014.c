#include <stdio.h>

int main() {
    double x, y, media;

    scanf("%lf %lf", &x, &y);

    media = x / y;

    printf("%.3lf km/l\n", media);

    return 0;
}