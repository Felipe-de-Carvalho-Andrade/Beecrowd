//Felipe de Carvalho Andrade - 20222009242
//Lucas Nepumoceno Coelho - 20222009055

#include <stdio.h>

int main() {
    int N, i, C, V;

    while (1) {
        int qtd = 0;

        scanf("%d", &N); //Lemos um valor 'N' que indica o número de diferentes comprimentos de varetas

        if (N == 0) { //Caso 'N' seja 0 significa que não há varetas, então encerramoso programa
            break;
        }

        //Criamos um 'for' para ler os 'N' comprimentos das varetas e suas respectivas quantidades
        for (i = 0; i < N; i++) { 
            scanf("%d %d", &C, &V); //Lemos o comprimento da vareta e a quantidade de varetas

            //Caso a quantidade de varetas seja par somamos ela a variável 'qtd', senão diminuímos 1
            //da quantidade de varetas para ela ficar par, e então somamos ela a variável 'qtd'
            if (V % 2 == 0) { 
                qtd += V;
            }
            else {
                qtd += V - 1; //Diminuímos 1 pois quando o número é ímpar sempre irá sobrar um lado que será
                //descartado, pois o retângulo possui dois lados congruentes, e este 1 que irá sobrar não terá um 
                //lado congruente
            }
            
        }
        //Imprimimos a quantidade de retângulos que é possível formar, dividindo a quantidade de varetas por 4, 
        //que representa a quantidade de lados de um retângulo
        printf("%d\n", qtd / 4); 
        
    }

    return 0;
}