#include <stdio.h>
#include <stdlib.h>

// Defino estrutura do nó
typedef struct no{
    int numero;
    struct no *proximo;
} no;

int main(){

    int n;
    no *inicio = NULL;  // Ponteiro que irá apontar para o início da lista encadeada

    // Loop para criar nós e adicionar valores
    for(int i = 0; i < 5; i++){

        // Aloca espaço dinâmico na memória para um nó
        no *temporario = malloc(sizeof(no)); 

        // Se der erro e não retornar uma localização na memória, o programa encerra
        if (temporario == NULL){
            return 1;
        }

        // Pergunta e registra um valor para o nó recém-criado
        printf("Digite um numero inteiro : ");
        scanf("%d", &n);

        temporario->numero = n;
        temporario->proximo = NULL;

        // Se a lista estiver vazia, o novo nó será o início
        if(inicio == NULL){
            inicio = temporario;
        }
        // Se já houver elementos na lista
        else{
            no *loc = inicio;
            inicio = temporario;
            inicio->proximo = loc; // Adiciona o novo nó no início da lista
        }
    }

    // Loop que percorre toda a lista encadeada
    for(no *ponteiro = inicio; ponteiro != NULL; ponteiro = ponteiro->proximo){
        // Escreve na tela o número armazenado e o endereço do próximo nó
        printf("Numero : %d\nLocalizacao : %p\n", ponteiro->numero, (void*)ponteiro->proximo);
    }

    // Libera o espaço de memória alocado para cada nó
    no *ponteiro = inicio;
    while(ponteiro != NULL){
        no *proximo = ponteiro->proximo; // Salva o próximo nó antes de liberar o atual
        free(ponteiro);
        ponteiro = proximo;
    }

    return 0;
}