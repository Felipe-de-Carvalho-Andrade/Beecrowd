#include <stdio.h>

int main() {
    double S = 1, d = 2, n = 3;
    
    while (n <= 39) {
       
        S += n / d;  

        d *= 2;
        n += 2;
    }
    
    printf("%.2lf\n", S);

    return 0;
}