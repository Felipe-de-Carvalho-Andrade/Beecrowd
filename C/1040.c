#include <stdio.h>

int main() {
    double N1, N2, N3, N4, media, exame;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media >= 5.0 && media < 7.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1f\n", exame);
    
        if ((media + exame) / 2 >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else 
        {
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1f\n", (media + exame) / 2);  
    }
    else
    {
        printf("Aluno reprovado\n");
    }
    
    return 0;
}