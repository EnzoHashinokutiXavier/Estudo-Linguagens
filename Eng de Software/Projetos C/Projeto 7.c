#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("Digite o primeiro n�mero :\n");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero :\n");
    scanf("%d", &n2);

    if (n1 % n2 == 0)
        printf("O n�mero %d � m�ltiplo de %d", n1, n2);
    else
        printf("O n�mero %d n�o � m�ltiplo de %d", n1, n2);
}
