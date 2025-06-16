#include <stdio.h>

int main(){
    char *palavras[2];                      // lista de palavras
    palavras[0] = "Ola !";
    palavras[1] = "Tchau !";
    printf("%s\n%s\n", palavras[0], palavras[1]);   // retirar palavras da lista
    printf("%c %c %c", palavras[0][0], palavras[0][1], palavras[0][2]);  // pegar letras de palavras numa array
}