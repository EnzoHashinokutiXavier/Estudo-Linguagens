#include <stdio.h>

void main(){
    int i, vet[10], maior = 0, menor = 0;

    for (i = 0; i < 10; i++){
        printf("Digite a idade da pessoa %d : ", (i + 1));
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 10; i++){
        if (vet[i] >= 18){
            maior++;
        }
        else{
            menor++;
        }
    }

    printf("\n%d pessoas sao maior de idade e %d pessoas sao menor de idade", maior, menor);
}