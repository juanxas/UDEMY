#include <stdio.h>
#include <stdlib.h>

int main(){
    float euros;
    printf ("Introduce tu cantidad de euros\n");
    scanf("%f",& euros);
    printf ("%2.f euros equivalen a %2.f pesetas", euros, euros * 166.386);

}