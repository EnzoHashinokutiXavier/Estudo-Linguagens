#include <stdio.h>

int quantia_letras(char lista_primeironome[]);
void erro();

void main(){
    int letras = 0;
    char primeironome[50];      // capacidade de ate 50 caracteres
    printf("Digite seu primeiro nome :");
    scanf("%49s", primeironome);  // capacidade ate caractere 49 (porque o 50 é \0 por ser uma array)  + nao precisa de & para array
    printf("Ola %s !", primeironome);
    letras = quantia_letras(primeironome);
    printf("\nHa %d letras no seu primeiro nome !", letras);
    erro();
}


int quantia_letras(char lista_primeironome[]){  // int *quantia permite modificaçao direta na variavel
    int i = 0;
    while (lista_primeironome[i] != '\0'){ // conta até encontrar o fim da array
        i++;
    }
    return i;
}


void erro(){
    printf("\nErro !!!");
}