#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int ano;

    printf("Digite em que ano estamos :\n");
    scanf("%d", &ano);

    if (ano % 4 == 0)
        printf ("O ano � bisexto");
    else
        printf("O ano n�o � bisexto");
}
