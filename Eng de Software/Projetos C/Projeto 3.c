#include <stdio.h>
#include <conio.h>

void main()
{
    float altura, peso;
    char sexo, masc, fem;

    printf("Digite sua altura :");
    scanf("%f", &altura);

    fflush(stdin);
    printf("Digite seu sexo (m/f):");
    scanf("%c", &sexo);

    masc = 'm';
    fem = 'f';

    if (sexo == masc)
    {
        peso = (72.7 * altura)-58;
        printf("Seu peso ideal eh %.2f", peso);
    }
    else
    {
        peso = (62.1 * altura)-44.7;
        printf("Seu peso ideal eh %.2f", peso);
    }

}
