#include <stdio.h>

int main()
{
    char escolha;
    int reais = 50;
    while(reais < 10000)
    {
        printf("Voce quer %d reais ou dobrar e passar para o proximo ?\n[S/n]:", reais);
        scanf(" %c", &escolha);
        if (escolha == 'S')
            reais *= 2;
        else
            break;
    }
    printf("FIM");
    return 0;
}