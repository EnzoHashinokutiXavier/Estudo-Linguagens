#include <stdio.h>

int main(int argc, char *argv[]){
    int i;
    for (i = 1; i<= argc; i++){
        printf("%s\n", argv[i]);
    }
    return 0;  // se retornar 0 aparece true, se retornar positivo false comando(echo $?)
}
// mostra todas palavras digitadas depois do chamado do codigo