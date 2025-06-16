#include <stdio.h>

void main(){
    int i, n = 0, lista[10];

    for (i = 0; i < 10; i++){
        printf("Digite um número : ");
        scanf("%d", &lista[i]);
    }

    for (i = 0; i < 10; i++){
        if (lista[i] > n){
            n = lista[i];
        }
    }

    printf("O maior numero encontrado na lista foi %d", n);
}