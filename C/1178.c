#include <stdio.h>

    /*
     FELIPE DE CARVALHO ANDRADE 20222009242
     Lucas Nepomuceno Coelho 20222009055
     Este codigo foi resolvido lendo o primeiro valor de vetor de indice 100 (n[0]) e depois dividindo valor posição por posição n[1] seria n[0] /2.
     */
 
int main() {
  
   double n[100];
    scanf ("%lf",&n[0]);
    for (int i=0;i<100;i++){
        n[i+1] = n[i] / 2;
        printf ("N[%d] = %.4lf\n",i,n[i]);
    }

    return 0;
}