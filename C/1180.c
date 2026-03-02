#include <stdio.h>

    /*
     FELIPE DE CARVALHO ANDRADE 20222009242
     Lucas Nepomuceno Coelho 20222009055
     Este codigo foi resolvido lendo o tamanho de um vetor, depois lendo todos os
     valores deste mesmo vetor e arrumando-os em ordem crescente.
     */
 
int main() {
  
   int n,z=0,min=0,i;
    scanf ("%d",&n);
    int vet[n];
    for (i=0;i<n;i++){
        scanf ("%d",&vet[i]);
    }
    min = vet[0];
    for (int i=1;i<n;i++){
        if (vet[z] > vet[i] && vet[z] != vet[i]){
            z = i;
            min = vet[i];
        }
    }
    printf ("Menor valor: %d\n",min);
    printf ("Posicao: %d\n",z);

    return 0;
}