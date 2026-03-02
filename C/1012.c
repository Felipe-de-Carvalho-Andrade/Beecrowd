#include <stdio.h>

int main() {
    double a, b, c, PI;
    PI = 3.14159;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf\n", (a * c) / 2);
    printf("CIRCULO: %.3lf\n", (PI * (c * c)));
    printf("TRAPEZIO: %.3lf\n", ((a + b) * c / 2));
    printf("QUADRADO: %.3lf\n", (b * b));
    printf("RETANGULO: %.3lf\n", (a * b));

    return 0;
}
/* Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C.
Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

O arquivo de entrada contém três valores com um dígito após o ponto decimal.

O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas 
descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. 
O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal. */