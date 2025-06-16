#include <stdio.h>

void main()
{
    float peso, valor;

    printf("Digite o peso em Kg do prato servido :");
    scanf("%f", &peso);

    valor = peso * 60;

    printf("O valor total deu %f", valor);
}
