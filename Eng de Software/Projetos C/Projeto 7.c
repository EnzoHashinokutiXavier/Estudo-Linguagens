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

    if (n1 % n2 == 0)
        printf("O número %d é múltiplo de %d", n1, n2);
    else
        printf("O número %d não é múltiplo de %d", n1, n2);
}
