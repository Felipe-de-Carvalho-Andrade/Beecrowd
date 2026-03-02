#include <stdio.h>

int main() {
    double m, n;

    scanf("%lf %lf", &m, &n);

    if (m == 1)
    {
        printf("Total: R$ %.2f\n", 4.00 * n);
    }
    else if (m == 2)
    {
        printf("Total: R$ %.2f\n", 4.50 * n);
    }
    else if (m == 3)
    {
        printf("Total: R$ %.2f\n", 5.00 * n);
    }
    else if (m == 4)
    {
        printf("Total: R$ %.2f\n", 2.00 * n);
    }
    else if (m == 5)
    {
        printf("Total: R$ %.2f\n", 1.50 * n);
    }
    else
    {
        printf("Total: R$ 0.00\n");
    }
    
    return 0;
}