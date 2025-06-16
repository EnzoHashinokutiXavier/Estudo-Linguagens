#include <stdio.h>

void main(){
    int idade, maior = 0;  // declaro as variaveis

    do{  // inicio do loop
        printf("Digite uma idade ou 0 para encerrar\n");  // requisito que digite uma idade ou 0
        scanf("%d", &idade);  // armazeno em idade
        if(idade > maior){  // caso maior que a maior idade armazenada
            maior = idade;  // substituo a maior idade armazenada idade
        }
    }while(idade != 0);  // loop acaba quando digitado 0

    if (maior != 0){  // caso armazenada alguma idade
        printf("Maior idade digitada : %d", maior);  // escrevo a maior idade digitada
    }
    else{  // caso nenhuma idade armazenada
        printf("Nenhuma idade digitada");  // escrevo que nao foi armazenada nenhuma idade
    }
}