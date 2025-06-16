#include <stdio.h>

void main(){
    int n, i = 2, soma = 0, c;  // declaro as variaveis

    printf("Digite um numero inteiro positivo :");  // requisito um numero de referencia para o programa
    scanf("%d", &n);  // armazeno em n

    c = n;  // contador recebe a quantia do numero de referencia

    while(c > 0){  // loop que acaba quando contador chegar a 0
        soma = soma + i;  // soma todos os primeiros n numeros pares
        i = i + 2;  // i cresce de 2 em 2 para representar os numeros pares
        c--;  // contador diminui em 1
    }

    printf("Soma dos %d primeiros numeros positivos : %d", n, soma);  // escrevo a soma final dos n primeros numeros pares
}