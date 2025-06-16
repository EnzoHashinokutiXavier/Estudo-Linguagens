#include <stdio.h>

void main(){
    int i, c = 0, lista[10];

    for (i = 0; i < 10; i++){
        printf("Digite um número : ");
        scanf("%d", &lista[i]);
    }

    for (i = 0; i < 10; i++){
        if (lista[i] % 2 == 0){
            c++;
        }
    }

    printf("Foi encontrado %d numeros pares na lista", c);
}