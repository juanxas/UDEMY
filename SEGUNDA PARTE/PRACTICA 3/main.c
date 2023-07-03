#include <stdio.h>
#include <stdlib.h>

int main(){
    float base, altura;
    printf("Introduzca la base del rectangulo\n");
    scanf("%f", & base);
    printf ("Introduzca la altura del rectangulo\n");
    scanf("%f", & altura);
    float area = base *altura;
    printf("el area del rectangulo de base %2.f y de altura %2.f es: %2.f", base, altura, area);
    
    return 0;
}