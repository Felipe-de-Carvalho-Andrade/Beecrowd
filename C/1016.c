#include <stdio.h>

int main() {
    double km;
    int t;

    scanf("%lf", &km);

    //Isto ocorre pois, usamos a formula da velocidade relativa = v1 - v2 (pois os carros se ultrapassam)
    //Multiplica por 60 pois está em km/H mas o problema quer o valor em minutos
    t = (km / 30) * 60;

    printf("%d minutos\n", t);


    return 0;
}