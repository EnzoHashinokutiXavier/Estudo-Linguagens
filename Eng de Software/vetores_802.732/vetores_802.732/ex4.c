#include <stdio.h>

void main(){
    int i, n, c = 0, lista[10];

    for (i = 0; i < 10; i++){
        printf("Digite um número : ");
        scanf("%d", &lista[i]);
    }

    printf("Digite um numero da lista : ");
    scanf("%d", &n);

    for (i = 0; i < 10; i++){
        if (lista[i] == n){
            c++;
        }
    }

    printf("Foi encontrado %d na lista %d vezes", n, c);
}