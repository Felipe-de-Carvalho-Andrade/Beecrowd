#include <stdio.h>

int main() {
    int x, imp = 0;

    scanf("%d", &x);

    while (1) {
        
        if (x % 2 == 1) {
            printf("%d\n", x);

            imp++;
        }
        
        if (imp == 6) {
            break;
        }
        
        x++;
    }
    
    return 0;
}