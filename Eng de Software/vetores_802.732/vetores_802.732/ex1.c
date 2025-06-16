#include <stdio.h>

void main(){
    float vet[10], c;
    int i = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o peso da pessoa %d :", (i + 1));
        scanf("%f", &vet[i]);
    }

    c = vet[0];
    
    for(i = 0; i < 10; i++){
        if(vet[i] < c){
            c = vet[i];
        }
    }

    printf("O menor peso digitado foi %.2f", c);
}