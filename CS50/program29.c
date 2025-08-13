#include <stdio.h>
#include <stdlib.h>

// Defino estrutura do nó
typedef struct node
{
    int numero;
    struct node *proximo;
} node;

// Função main (principal)
int main(){

    node *inicio = NULL;  // Ponteiro que irá apontar para o início da lista encadeada
    int resposta;

    // Loop para criar nós e adicionar valores
    for(int i = 0; i < 5; i++){

        // Aloca espaço dinâmico na memória para um nó
        node *n = malloc(sizeof(node));

        // Se der erro e não retornar uma localização na memória, o programa encerra
        if(n == NULL){
            return 1;
        }

        // Pergunta e registra um valor para o nó recém-criado
        printf("Digite um numero : ");
        scanf("%d", &resposta);
        n->numero = resposta;
        n->proximo = NULL;

        // Se a lista estiver vazia, o novo nó será o início
        if(inicio == NULL){
            inicio = n;
        }
        // Se já houver elementos na lista
        else{
            // Avança até o último nó da lista
            for(node *ponteiro = inicio; ponteiro != NULL; ponteiro = ponteiro->proximo){
                if(ponteiro->proximo == NULL){
                    ponteiro->proximo = n;  // Adiciona o novo nó ao final da lista
                    break;
                }
            }
        }
    }

    // Loop que percorre toda a lista encadeada
    for(node *ptr = inicio; ptr != NULL; ptr = ptr->proximo){
        // Escreve na tela o número armazenado
        printf("%d\n", ptr->numero);
    }

    // Libera o espaço de memória alocado para cada nó
    node *ptr = inicio;
    while(ptr != NULL){
        node *proximo = ptr->proximo; // Salva o próximo nó antes de liberar o atual
        free(ptr);
        ptr = proximo;
    }

    return 0;
}