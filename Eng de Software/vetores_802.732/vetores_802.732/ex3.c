#include <stdio.h>

void main(){
    int i, x, lista[10];

    for (i = 0; i < 10; i++){
        printf("Digite um número : ");
        scanf("%d", &lista[i]);
    }

    for (i = 0; i < 5; i++){
        x = lista[i];
        lista[i] = lista[(9 - i)];
        lista[(9 - i)] = x;
    }

    printf("Ordem inversa : ");

    for(i = 0; i < 10; i++){
        printf("\n%d", lista[i]);
    }
}