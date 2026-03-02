#include <string.h> 
#include <stdio.h>

int main() {
    char a[256], b[256], c[256];
    char t1[] = "ave", t2[] = "mamifero", t3[] =  "inseto", t4[] = "anelideo"; 
    char a1[] = "carnivoro", a2[] = "herbivoro", a3[] = "onivoro", a4[] = "hematofago";

    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);

    if (strcmp(b, t1) == 0) {
        if (strcmp(c, a3) == 0) {
            printf("pomba\n");
        }
        else {
            printf("aguia\n");
        }
    }
    else if (strcmp(b, t2) == 0) {
        if (strcmp(c, a3) == 0) {
            printf("homem\n");
        }
        else {
            printf("vaca\n");
        }
    }
    else if (strcmp(b, t3) == 0) {
        if (strcmp(c, a4) == 0) {
            printf("pulga\n");
        }
        else {
            printf("lagarta\n");
        }
    }
    else if (strcmp(b, t4) == 0) {
        if (strcmp(c, a4) == 0) {
            printf("sanguessuga\n");
        }
        else {
            printf("minhoca\n");
        }
    }
    

    return 0;
}