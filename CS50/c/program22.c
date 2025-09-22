#include <stdio.h>

const int num = 5;

typedef struct{
    char nome[50];
    int quantia;
}item;

void main(){
    int i, quantia_maior = -1, indice = -1;
    item produtos[num];

    for (i = 0; i < num; i++){
        printf("\nItem : ");
        scanf("%49s", &produtos[i].nome);
        printf("Quantia : ");
        scanf("%d", &produtos[i].quantia);
    }

    for (i = 0; i < num; i++){
        if (produtos[i].quantia > quantia_maior){
            quantia_maior = produtos[i].quantia;
            indice = i;
        }
    }

    if (quantia_maior == -1){
        printf("\nNenhum produto com quantia positiva");
    }
    else{
        printf("\nProduto com maior quantia : %s", produtos[indice].nome);
    }
}