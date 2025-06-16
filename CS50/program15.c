#include <stdio.h>

int letras(char array_qualquer[]);
void reverso(char array_nome[], int tamanho);

void main(){
    int quantia;
    char nome[50];

    printf("Digite seu nome :");
    scanf("%49s", nome);
    
    quantia = letras(nome);

    printf("Seu nome tem %d letras\n", quantia);

    reverso(nome, quantia);
}


int letras(char array_qualquer[]){
    int i = 0;

    while (array_qualquer[i] != '\0'){
        i++;
    }

    return i;
}


void reverso(char array_nome[], int tamanho){
    while(tamanho > 0){
        printf("%c", array_nome[(tamanho -1)]);
        tamanho--;
    }
}