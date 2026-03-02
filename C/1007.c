#include <stdio.h>

int main() {
    int a, b, c, d, r;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    r = (a * b - c * d);

    printf("DIFERENCA = %d\n", r);

    return 0;
}

/* Timelimit: 1
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre 
a diferença do produto de A e B pelo produto de C e D segundo a fórmula: 
DIFERENCA = (A * B - C * D).

O arquivo de entrada contém 4 valores inteiros.

Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo 
abaixo, com um espaço em branco antes e depois da igualdade. */