#include <stdio.h>

int main() {
    double salario, reajuste, n_salario;

    scanf("%lf", &salario);

    if (salario <= 400.00) {
        n_salario = salario * 1.15;
        reajuste = n_salario - salario;

        printf("Novo salario: %.2lf\n", n_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 15 %%\n");
    }
    else if (salario >= 400.01 && salario <= 800.00) {
        n_salario = salario * 1.12;
        reajuste = n_salario - salario;

        printf("Novo salario: %.2lf\n", n_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 12 %%\n");
    }
    else if (salario >= 800.01 && salario <= 1200.00) {
        n_salario = salario * 1.10;
        reajuste = n_salario - salario;

        printf("Novo salario: %.2lf\n", n_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 10 %%\n");
    }
    else if (salario >= 1200.01 && salario <= 2000.00) {
        n_salario = salario * 1.07;
        reajuste = n_salario - salario;

        printf("Novo salario: %.2lf\n", n_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 7 %%\n");
    }
    else {
        n_salario = salario * 1.04;
        reajuste = n_salario - salario;

        printf("Novo salario: %.2lf\n", n_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}