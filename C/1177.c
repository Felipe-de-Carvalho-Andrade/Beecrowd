//Felipe de Carvalho Andrade - 20222009242
//Lucas Nepumoceno Coelho - 20222009055

/* Para resolver este problema lemos um valor 'T', e depois de ler este criamos um laço de repetição para 
   imprimir de 0 até o valor 'T - 1', e respectiva posição deste valor no vetor. Usamos a variável 'i' para 
   indicar a posição, a 'x' para ir contando de 0 até 'T - 1', e quando o valor 'T' é alcançado antes de imprimir 
   pelo 'x'  entramos em uma condição que faz com que o 'x' volte a ser zero, assim repetindo este processo 
   1000 vezes */

#include <stdio.h>

int main() {
    int N[1000], T, i, x = 0;

    scanf("%d", &T);

    for (i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, x);
        x++;

        if (x == T) {
            x  = 0;
        }

    }

    return 0;
}