#include <stdio.h>

void main()
{
    int quantia_lata350, quantia_lata600, quantia_garrafa2;
    float litros_total;

    printf("Digite a quantia de latas de 350 ml:");
    scanf("%d", &quantia_lata350);

    printf("Digite a quantia de latas de 600 ml:");
    scanf("%d", &quantia_lata600);

    printf("Digite a quantia de garrafas de 2L:");
    scanf("%d", &quantia_garrafa2);

    litros_total = (quantia_garrafa2 * 2) + (quantia_lata350 * 0.35) + (quantia_lata600 * 0.6);

    printf("A quantia de litros totais deu %f", litros_total);
}
