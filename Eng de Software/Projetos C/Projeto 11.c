#include <stdio.h>

void main()
{
    int numero, x, tentativa, numero_tela;

    x = 0;
    tentativa = 0;
    numero_tela = 0;

    printf("Digite o valor de N :\n");
    scanf("%d", &numero);

    while(x == 0)
    {
        tentativa += 1;
        numero_tela += tentativa;
        if (tentativa == numero)
        {
            x = 1;
            break;
        }
        printf("%d\n", numero_tela);
    }
    printf("Fim");

}
