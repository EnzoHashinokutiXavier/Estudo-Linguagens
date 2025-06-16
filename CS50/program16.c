#include <stdio.h>

void main(){
    int i;
    char palavra[50], letra;

    printf("Digite uma palavra : \n");
    scanf("%s", palavra);

    for (i = 0; i < 50; i++){
        if (palavra[i] >= 'a' && palavra[i] <= 'z'){  // se for uma letra minuscula
            printf("%c", (palavra[i] - 32));          // subtraio 32 para se tornar maiuscula
        }
        else{
            printf("%c",palavra[i]);
        }
    }
}