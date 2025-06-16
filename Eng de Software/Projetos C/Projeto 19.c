#include <stdio.h>

int main()
{
    int numero, i, maior;
    numero = 0;
    maior = 0;
    for (i = 1; i < 11; i++){
        printf("\nDigite um numero inteiro (contagem : %d):\n", i);
        scanf("%d", &numero);
        if (numero > maior){
            maior = numero;
        }
    }
    if (numero == 0){
        printf("Nenhum numero inteiro positivo digitado !");
    }
    else {
        printf("O maior numero digitado foi %d !", maior);
    }
}
