#include <stdio.h>
#include <math.h>

int main() {
    double v, resto;
    int n100, n50, n20, n10, n5, n2, m1, m5, m10, m25, m50, m100;

    scanf("%lf", &v);

    resto = round(v * 100);

    n100 = resto / 100.00;
    resto -= (n50 * 100.00);
    n50 = resto / 50.00;
    resto -= (n50 * 50.00);
    n20 = resto / 20.00;
    resto -= (n20 * 20.00);
    n10 = resto / 10.00;
    resto -= (n10 * 10.00);
    n5 = resto / 5.00;
    resto -= (n5 * 5.00);    
    n2 = resto / 2.00;
    resto -= (n2 * 2.00);    
    m100 = resto / 1.00;
    resto -= (m100 * 1.00); 
    m50 = resto / 0.50;
    resto -= (m50 * 0.50);
    m25 = resto / 0.25;
    resto -= (m25 * 0.25); 
    m10  = resto / 0.10;
    resto -= (m10 * 0.10);
    m5 = resto / 0.05;
    resto -= (m5 * 0.05);
    m1 = resto;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m100);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);

    return 0;
}