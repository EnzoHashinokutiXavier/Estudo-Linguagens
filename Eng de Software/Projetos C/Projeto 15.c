#include <stdio.h>

int main()
{
    int quantia, soma, numero;
    float media;

    quantia = 0;
    soma = 0;

    do
    {
        printf("Digite um numero aleatorio ou -99 para encerrar :\n");
        scanf("%d", &numero);
        if (numero > 0)
        {
            quantia ++;
            soma += numero;
        }
    }
    while (numero != -99);
    media = soma / quantia;
    printf("A media dos numeros positivos eh : %.2f\n", media);
    return 0;
}
