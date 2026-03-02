#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, d;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    //funçao pow serve para potenciação e a sqrt para raiz quadrada
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", d);

    return 0;
}