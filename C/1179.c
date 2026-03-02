//Felipe de Carvalho Andrade - 20222009242
//Lucas Nepumoceno Coelho - 20222009055

/* Para solucionar este problema usamos a estratégia explicada abaixo: */

#include <stdio.h>

int main() {
    int x, i, j, p = 0, im = 0, xp[5], xi[5];

    for (i = 0; i < 15; i++) {
        scanf("%d", &x); //Lemos um valor 'x' a cada iteração do laço de repetição

        if (x % 2 == 0) { //Verificamos se o número é par, se for armazenamos ele no vetor 'xp' na posição 'p'
            xp[p] = x;    //que é inicializada com 0 e é aumentada em 1 a cada condição que for verdadeira
            p++;
        }
        else { //Se a condição anterior não for verdadeira significa que o número é ímpar, então armazenamos ele 
            xi[im] = x; //no vetor 'xi' na posição 'im' que é inicializada com 0 e é aumentada em 1 a cada entrada 
            im++;       //no 'else' 
        }
        
        if (p == 5) { //Quando 'p' for igual a 5 significa que 5 valores lidos são pares, e com isso entramos na condição
            for (j = 0; j < 5; j++) { //Usamos o laço de repetição para imprimir os valores pares armazenados no vetor 'xp'
                printf("par[%d] = %d\n", j, xp[j]);
            }
            p = 0; //Ao final da condição 'p' volta a ser 0
        }
        else if (im == 5) { //Quando 'im' for igual a 5 significa que 5 valores lidos são ímpares, e com isso entramos na condição
            for (j = 0; j < 5; j++) { //Usamos o laço de repetição para imprimir os valores ímpares armazenados no vetor 'xi'
                printf("impar[%d] = %d\n", j, xi[j]);
            }
            im = 0; //Ao final da condição 'im' volta a ser 0
        }

    }
    
    for (i = 0; i < im; i++) { //Usamos este for para imprimir os valores ímpares restantes, colocamos ele para imprimir
        printf("impar[%d] = %d\n", i, xi[i]); //primeiro para atender as condições do problema
    }
    for (i = 0; i < p; i++) { //Usamos este for para imprimir os valores pares restantes
        printf("par[%d] = %d\n", i, xp[i]);
    }

    return 0;
}