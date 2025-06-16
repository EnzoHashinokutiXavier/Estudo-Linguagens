#include <stdio.h>

void main(){
    int n, soma = 0;  // declaro as variaveis 

    do{

        if (n % 5 == 0){    // caso o ultimo numero digitado for multiplo de cinco
            soma++;        // adiciona ao contador de multiplos de cinco
        }

        printf("Digite um numero ou 0 para finalizar : "); 
        scanf("%d", &n);  // armazena o numero digitado em n

    }while(n != 0);  // loop termina caso escolhido 0

    printf("A soma dos numeros digitados multiplos de 5 eh %d ", soma);  // imprime a quantia de numeros multiplos de 5
}