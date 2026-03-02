
#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    if (x < y) {
       while (x < y) {
            
            if (x % 5 == 2 || x % 5 == 3) {
                printf("%d\n", x);
            }
            x++;
        }
    }
    
    else if (y < x) {
        while (y < x) {
           
           if (y % 5 == 2 || y % 5 == 3) {
                printf("%d\n", y);
            }     
            y++;
        }
    }

    return 0;
}