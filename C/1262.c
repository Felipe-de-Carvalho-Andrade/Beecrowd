//Felipe de Carvalho Andrade - 20222009242
//Lucas Nepumoceno Coelho - 20222009055

#include <stdio.h>
#include <string.h>

int main() {
    char pc[50];

    //Crimamos um 'while' que tem como argumento ler um rastro de histórico, que deve ser diferente de um fim de arquivo
    //para permanecer no laço de repetição 
    while (scanf("%s", &pc) != EOF) { 
        int N = 0, i = 0, qtd = 0, temp = 0, P;
        
        scanf("%d", &P); //Lemos um valor que indica quantas leituras de 'R' podem ser realizadas simultâneamente

        N = strlen(pc); //Calculamos a quantidade de caracteres na string 'pc' e armazenamos em 'N'
        
        //Criamos um 'for' que vai até 'N-1', que tem como obejtivo verificar posição por posição da string
        for (i = 0; i < N; i++) {
            
            //Caso a posição 'i' da string 'pc' seja igual a 'W' irá adentrar no 'if'
            if (pc[i] == 'W') {
                qtd++; //A quantidade de ciclos irá aumentar 1
                if (temp >= 1) { //Caso a 'pc' na posição 'i' seja igual a 'W', e a(s) posição(ões) anterior(es) for
                    qtd++;       //'R' os ratros anteriores contam como 1 ciclo
                    temp = 0;
                }
                
            }
            else { //Caso a posição 'i' da string 'pc' não seja igual a 'W' irá adentrar no 'else'
                temp++; //Soma um a quantidade de leituras
            
                if (temp == P) { //Caso as leituras atinjam o número de processos ('P') e 1 ciclo, deve ocorrer 
                    qtd++;
                    temp = 0; 
                }
                else if (i == N - 1 && temp > 0) { //Caso o último valor da string for 'R', e ele não tiver completado
                    qtd++; //o número de leituras ('temp') para realizar um ciclo ele irá realizar um ciclo
                }
                
            }
        }
        printf("%d\n", qtd); //Imprime a quantidade de ciclos necessários para processar o rastro informado

    }
    
    return 0;
}