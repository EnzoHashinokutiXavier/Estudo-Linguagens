#include <stdio.h>

void quantia_letras(char lista_nome[], int *quantia);

void main(){
    int letras = 0;
    char nome[50];      // capacidade de ate 50 caracteres
    printf("Digite seu nome :");
    scanf("%49s", nome);  // capacidade ate caractere 49 (porque o 50 é \0 por ser uma array)  + nao precisa de & para array
    printf("Ola %s !", nome);
    quantia_letras(nome, &letras);    // 7 passa o endereço de letras, permitindo alteracao
    printf("Ha %d letras no seu nome !", letras);
}

void quantia_letras(char lista_nome[], int *quantia){  // int *quantia permite modificaçao direta na variavel
    int i = 0;
    while (lista_nome[i] != '\0'){ // conta até encontrar o fim da array
        i++;
    }
    *quantia = i;  // atualiza o valor de quantia
}