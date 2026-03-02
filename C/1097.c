#include <stdio.h>

int main() {
    int i = 1, j = 7, k = 0;

    while (1) {
        if (i == 9 && k == 3) {
            break;
        }
        printf("I=%d J=%d\n", i, j);
        k++;
        j--;
        if (k == 3) {
            j += 5;
            if (i != 9) {
                i += 2;
                k = 0;
            }
            
        }
        
    }

    return 0;
}