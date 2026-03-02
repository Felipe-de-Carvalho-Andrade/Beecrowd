#include <stdio.h>

int main() {
    int N, i = 0, x = 2;

    scanf("%d", &N);
    
    while (x > 1 && x < 10000) {
        
        if (x % N == 2) {
            printf("%d\n", x);
        }

        x++;
    }  
    
    return 0;
}