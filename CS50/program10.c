#include <stdio.h>

int main(void){
    char Nome[20], Sobrenome[20];
    printf("Digite seu nome :");
    scanf("%19s", Nome);
    printf("Digite seu sobrenome :");
    scanf("%19s", Sobrenome);
    printf("Suas iniciais sao %c e %c", Nome[0], Sobrenome[0]);
    return 0;
}