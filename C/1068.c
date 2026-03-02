#include <string.h>
#include <stdio.h>

int main(){
    int i, qtd;
    char expressao[1001];

    while(scanf("%s\n", &expressao) != EOF) {
        qtd = 0;

        for(i = 0; i < strlen(expressao); i++) {
            if(expressao[i] == '(') {
                qtd++;
            }
            else if(expressao[i] == ')') {
                if(qtd > 0) 
                    qtd--;
                else                
                    break;
            }
        }

        if(i == strlen(expressao) && qtd == 0) 
            printf("correct\n");
        else 
            printf("incorrect\n");
    }

    return 0;
}