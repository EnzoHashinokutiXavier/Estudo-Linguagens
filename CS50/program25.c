#include <stdio.h>

void main(){
    char *Nome [50];
    int Idade;

    printf("Digite seu nome :");
    scanf("%s", Nome);
    printf("Digite sua idade :");
    scanf("%i", &Idade);

    FILE *arquivo = fopen("editavel.txt", "a");  // abre arquivo

    if (arquivo == NULL){  // se o arquivo nao existir
        return 1;
    }

    fprintf(arquivo, "Nome : %s\nIdade : %i", Nome, Idade);  // escreve no arquivo
}