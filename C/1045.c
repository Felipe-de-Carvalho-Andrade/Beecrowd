#include <stdio.h>

int main() {
    double a, b, c, temp;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (b > a) {
        temp = a;
        a = b;
        b = temp;
    }
    if (c > a) {
        temp = a;
        a = c;
        c = temp;
    }
    
    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    }
    if (a == b && b == c) {
        printf("TRIANGULO EQUILATERO\n");
    }
    if (a*a == b*b + c*c) {
        printf("TRIANGULO RETANGULO\n");
    }
    if (a*a > b*b + c*c) {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if (a*a < b*b + c*c) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && a != c) {
        printf("TRIANGULO ISOSCELES\n");
    }
    else if (a == c && a != b) {
        printf("TRIANGULO ISOSCELES\n");
    }
    else if (c == b && a != c) {
        printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}