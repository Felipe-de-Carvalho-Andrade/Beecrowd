#include <stdio.h>

int main() {
    int N, i = 0, Q, qc = 0.0, qs = 0.0, qr = 0.0;
    char t;


    scanf("%d", &N);

    while (i < N) {
        scanf("%d %c", &Q, &t);

        switch (t) {
        case 'R':
            qr += Q;
            break;
        case 'S':
            qs += Q;
            break;
        case 'C':
            qc += Q;
            break;
        }
        i++;
    }
    Q = qc + qs + qr;
    
    printf("Total: %d cobaias\n", Q);
    printf("Total de coelhos: %d\n", qc);
    printf("Total de ratos: %d\n", qr);
    printf("Total de sapos: %d\n", qs);
    printf("Percentual de coelhos: %.2f %%\n", (float) qc * 100 / Q);
    printf("Percentual de ratos: %.2f %%\n", (float) qr * 100 / Q);
    printf("Percentual de sapos: %.2f %%\n", (float) qs * 100 / Q);

    return 0;
}