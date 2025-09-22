#include <stdio.h>

int main(){
    int i;
    printf("Contagem Regressiva !\nDigite o numero inicial : "); 
    scanf("%i", &i); 
    for (i; i > -1; i--)  // para i, enquanto i maior que -1, com i diminuindo um a cada loop
    {
        printf("\n%i", i);
    }
    return 0;
}