#include <stdio.h>

int main() {
    double S = 0, d = 1;

    while (d <= 100) {
        S += 1/d;

        d++;
    }
    
    printf("%.2lf\n", S);

    return 0;
}