#include <stdio.h>

int main ()
{
    int i = 10;
    printf("Contagem regressiva de 10\n");
    for (i; i > -1; i--)     // para i, enquanto i maior que -1, com i subtraindo 1 a cada loop
    {
        printf("%i\n", i);
    }
    return 0;
}