#include <stdio.h>

int main() {
    int x, y;
    int i;
    int soma;

    soma = 0;

    scanf("%d %d",&x, &y);
  
    
    if (x < y) {
        x += 1;
        while (x < y) {
            if (x % 2 != 0)
            {
                soma += x;
            }
        x++;
        }
    }
    else{ 
        y += 1;
        while(y < x) {
            if (y % 2 != 0){
                soma += y;
            }
        y++;    
        }    
    }

    printf("%d\n", soma);

    return 0;
}