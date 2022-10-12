#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pontos.h"


int main(void){

    Ponto* p = cria(2.0,1.0,3.0);
    Ponto* q = cria(3.4,2.1,0.7);
    Ponto* r = cria(3.0,7.3,1.8);
    float d = distancia(p,q,r);
    printf("Distancia entre pontos: %.1f\n",d);
    libera(q);
    libera(p);
    libera(r);

    return 0;
}