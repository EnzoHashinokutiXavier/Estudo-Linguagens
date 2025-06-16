#include <stdio.h>

int fazer_bloco(int altura, int largura);
int largura_bloco(int largura);

int main(){
    int altura, largura, i;
    printf("Mario\nDigite altura do bloco :\n");
    scanf("%i", &altura);
    printf("Digite a largura do bloco :\n");
    scanf("%i", &largura);
    fazer_bloco(altura, largura);
    return 0;
}

int fazer_bloco(int altura, int largura){
    for (; altura > 0; altura--){
        largura_bloco(largura);
        printf("\n");
    }
}

int largura_bloco(int largura){
    for (; largura > 0; largura--)
        printf("#");
}