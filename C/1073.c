#include <stdio.h>

int main() {
    int N, i = 1, soma;

    scanf("%d", &N);

    while (i <= N) {
        
        if(i % 2 == 0){
            printf("%d^2 = %d\n", i, i*i);
        }
        
        i++;
    }
    
    return 0;
}