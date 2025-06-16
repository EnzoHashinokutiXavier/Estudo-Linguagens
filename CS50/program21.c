#include <stdio.h>

void funcao();
int variavel_global = 5;

void main(){
    printf("\n%d", variavel_global);
    variavel_global = variavel_global - 1;
    funcao();
}

void funcao(){
    printf("\n%d", variavel_global);
}