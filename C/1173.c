#include <stdio.h>

    /*
     FELIPE DE CARVALHO ANDRADE 20222009242
     Lucas Nepomuceno Coelho 20222009055
     Este codigo foi resolvido lendo o primeiro valor de um vetor de indice 10 (n[0]) e depois dobrando
     o valor posição por posição n[1] seria n[0] * 2.
     */
 
int main() {
 
    int n[10];
    scanf ("%d",&n[0]);
    for (int i=0;i<10;i++){
        n[i+1] = n[i] * 2;
        printf ("N[%d] = %d\n",i,n[i]);
    }

 
    return 0;
}