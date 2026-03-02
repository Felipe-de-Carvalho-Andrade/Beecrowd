#include <stdio.h>

int main() {
    int alcool = 0, gasolina = 0, diesel = 0, i;

    while (i != 4) {
        
        scanf("%d", &i);
        
        if (i == 1) {
            alcool++;
        }
        else if (i == 2) {
            gasolina++;
        }
        else if (i == 3) {
            diesel++;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}