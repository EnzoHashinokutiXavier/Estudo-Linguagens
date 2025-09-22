#include<stdio.h>

void main(){
    typedef char* string;  // typedef muda um tipo por outro nome
    string palavra[] = {"olaa"};
    printf("%s", palavra[0]);
}

// Ex: mudar a estrutura carro em car
// typedef struct carro car