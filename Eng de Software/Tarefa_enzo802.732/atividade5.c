#include <stdio.h>

void main(){

    int n, i, quantia[7];  // declaro as variaveis

    quantia[0] = 0;  // quantia de numeros invalidos
    quantia[1] = 0;  // quantia de jogadas de dado com a face 1
    quantia[2] = 0;  // quantia de jogadas de dado com a face 2
    quantia[3] = 0;  // quantia de jogadas de dado com a face 3
    quantia[4] = 0;  // quantia de jogadas de dado com a face 4
    quantia[5] = 0;  // quantia de jogadas de dado com a face 5
    quantia[6] = 0;  // quantia de jogadas de dado com a face 6

    for(i = 1; i < 16; i++){      // loop para quinze jogadas de dados
        printf("jogada %d : ", i);   // mostra o numero da jogada de dado
        scanf("%d", &n);            // registra o valor do dado na variavel n
        if (n > 0 && n < 7){     // caso digite uma face valida de um dado de 6 lados
            quantia[n] += 1;  // adiciona a quantia de jogadas armazenadas
        }
        else{                  // caso o numero digitado nao seja uma face do dado
            quantia[0] += 1;  // adiciona um numero a quantia de numeros invalidos
        }
    }

    printf("\nLado | Quantia");  // tabela indicando o lado do dado e quantas vezes cairam
    for (i = 1; i < 7; i++){    // loop para mostrar todos os lados do dado e suas respectivas quantias de acertos
        printf("\n%d    | %d", i, quantia[i]);
    }

    printf("\nNumeros invalidos : %d", quantia[0]);  // quantia de numeros diferentes de 1,2,3,4,5e6
}