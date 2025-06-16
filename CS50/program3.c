#include <stdio.h>

int main(){
    int n;
    do
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);
    }
    while (n > 0);
    printf("Numero negativo ou zero digitado: %d\n", n);
    return 0;
}