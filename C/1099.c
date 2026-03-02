#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int X, Y, soma = 0;

        scanf("%d %d", &X, &Y);

        if (X < Y) {
            while (X < Y) {
                X++;
                if (X % 2 == 1 && X < Y) {
                    soma += X;
                }
            }
            
            
        }
        else if (Y < X) {
            while (Y < X) { 
                Y++;
                if (Y % 2 == 1 && Y < X) {
                    soma += Y;
                }
            }
            
        }     
        printf("%d\n", soma);
    }
    
    return 0;
}