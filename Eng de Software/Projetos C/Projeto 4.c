#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, dif;

    printf("\nInforme o primeiro n�mero\n");
    scanf("%d", &n1);

    printf("\nInforme o segundo n�mero\n");
    scanf("%d", &n2);

    if (n1 > n2)
        dif = n1 - n2;
    else
        dif = n2 - n1;

    printf("\nA diferen�a entre %d e %d � %d\n", n1, n2, dif);
}
