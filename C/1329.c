#include <stdio.h>

    /*
     FELIPE DE CARVALHO ANDRADE 20222009242
     Lucas Nepomuceno Coelho 20222009055
     Este codigo foi resolvido lendo o numero de vezes que a moeda seria jogada para
     cima e depois imprimindo o valor de vezes que jhon e marry ganharam.
     */
 
int main() {
  
   int z,a,mary=0,jhon=0;
  scanf("%d",&z);
  while (z > 0){
    for (int i=0;i<z;i++){
      scanf("%d",&a);
        if(a == 0){
        mary++;
        }
      else{
        jhon++;
        }
    }
     printf("Mary won %d times and John won %d times\n",mary,jhon);
    scanf("%d",&z);
    mary =0;
    jhon=0;
  }
  
    return 0;
}