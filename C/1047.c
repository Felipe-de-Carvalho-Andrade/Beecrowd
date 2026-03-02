#include <stdio.h>

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a == c && b == d) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        return 0;
    }

    int x, y;

    x = c - a;
    y = d - b;

    if (x < 0) {
        x = 24 + x;
    }
    if (y < 0) {
        y = 60 + y;
        x--;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x, y);

    return 0;
}