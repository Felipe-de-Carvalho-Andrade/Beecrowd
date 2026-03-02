#include <stdio.h>

int main() {
    int i, T, N;
    unsigned long long int Fib[61];
    
    Fib[0] = 0;
    Fib[1] = 1;

    //calcula os Fib de 1 a 60, estabelecido no problema
    for(i = 2; i <= 60; i++) {
        Fib[i] = (Fib[i-1] + Fib[i-2]);
    }

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);

        printf("Fib(%d) = %lld\n", N, Fib[N]);
    }
    
    return 0;
}