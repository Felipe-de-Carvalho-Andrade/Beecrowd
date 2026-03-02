//Davi James Vilela Guimaraes
//Felipe de Carvalho Andrade

#include <stdio.h>

int main() {
    const int N = 100;
    double A[N];
    int i;

    for(i = 0; i < N; i++) {
        scanf("%lf", &A[i]);
    }

    for(i = 0; i < N; i++) {
        if(A[i] <= 10) {
            printf("A[%d] = %.1lf\n", i, A[i]);
        }
    }

    return 0;
}