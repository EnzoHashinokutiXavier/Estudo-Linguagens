#include <stdio.h>

void main(){

    int i, j, n, x, soma = 0, partida, parada;

    int mat[4][4] = {
        {4, 1, 2, 3},
        {5, 2, 1, 400},
        {2, 1, 3, 8},
        {7, 1, 2, 5}
    };

    printf("Digite o numero de viagens :");
    scanf("%d", &n);
    n++;  // adiciona na contagem o ponto inicial
    
    int destino[n];
    
    printf("Cidades : 0, 1, 2, 3\n");
    printf("Digite o ponto de inicio :");
    scanf("%d", &destino[0]);

    for(i = 1; i < n; i++){
        printf("Digite o proximo destino : ");
        scanf("%d", &destino[i]);
    }

    for(i = 1; i < n; i++){
        partida = destino[(i - 1)];
        parada = destino[i];
        x = mat[partida][parada];
        printf("Valor viagem %d : %d\n", i, x);
        soma += x;
    }

    printf("Valor total : %d", soma);
}