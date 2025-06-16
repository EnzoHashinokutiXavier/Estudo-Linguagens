#include <stdio.h>

void main()
{
    int n1, n2, x, y, soma;

    x = 0;
    y = 0;
    soma = 0;

    printf("Digite o valor de n1 :\n");
    scanf("%d", &n1);

    printf("Digite o valor de n2 :\n");
    scanf("%d", &n2);

    while(x == 0)
    {
        if (y == n2)
        {
            x = 1;
            break;
        }
        soma += n1;
        y += 1;
    }
    printf("%d x %d = %d", n1, n2, soma);
}
