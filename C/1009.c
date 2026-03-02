#include <stdio.h>

int main() {
    double vendas, salario, total;
    char nome[20];

    scanf("%s %lf %lf", &nome, &salario, &vendas);

    total = vendas * 15/100;
    total += salario;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0; 
}