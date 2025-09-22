#include <stdio.h>

void main(int argc, char *argv[]){  // argc = quantia de coisas digitadas , argv onde sera salvo
    if (argc > 1){  // mais de uma coisa digitada (algo alem do nome do programa)
        printf("nome %s", argv[1]); // primeira palavra depois do nome
    }
    else{
        printf("Nenhum nome foi digitado");  // nada digitado alem do chamado
    }
}