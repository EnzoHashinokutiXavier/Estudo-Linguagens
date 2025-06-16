#include <stdio.h>

int main()
{
    int n;
    printf("Contagem regressiva!\nDigite um número: ");
    scanf("%d", &n);
    while (n >= 0) // Enquanto n for maior ou igual a 0
    {
        printf("%d\n", n); // Imprime o valor de n
        n--; // Decrementa n em 1
    }
}