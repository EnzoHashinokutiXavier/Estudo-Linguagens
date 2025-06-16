#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite o primeiro número :\n");
    scanf("%d", &n1);

    printf("Digite o segundo número :\n");
    scanf("%d", &n2);

    if (n1 == n2)
        printf("Os números são iguais");
    else
        printf("Os números são diferentes");
}
