#include <stdio.h>

void main(){
    int i, soma = 0;  // declaro as variaveis
    float altura;

    for (i = 1; i <= 10; i++){  // loop de 10 repetissoes

        printf("Digite a altura da pessoa %d :", (i));  // requisito que digite uma altura
        scanf("%f", &altura);  // armazeno em altura

        if (altura > 1.80){  // caso altura maior que 1.80
            soma++;  // numero de pessoas com mais de 1.80 aumenta
        }

    }

    printf("Ha %d pessoas com mais de 1.80", soma);  // escrevo quantas pessoas com mais de 1.80 foram registradas

}