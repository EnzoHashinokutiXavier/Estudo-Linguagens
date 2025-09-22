#include <stdio.h>

void main(){
    int lista[10];
    int i, x, y, z;

    for(i = 0; i < 10; i++){
        printf("Digite um valor : ");
        scanf("%d", &lista[i]);
    }

    z = 10;

    do                                      // organizar itens do menor para o menor
    {
        x = 0;
        for(i = 0; i < z; i++){

            if(lista[i] > lista[(i + 1)]){
                y = lista[i];
                lista[i] = lista[(i + 1)];
                lista[(i + 1)] = y;
                x++;
            }
        }
        z--;
    }while(x != 0);

    printf("\nOrdem crescente :");

    for(i = 0; i < 10; i++){
        printf("\n%d", lista[i]);
    }

    printf("\nDigite um número : ");
    scanf("%d", &z);
    x = -1;

    for(i = 0; i < 10; i++){           // encontrar ultima apariçao do numero escolhido
        if (z == lista[i]){
            x = i;
        }
    }

    if (x == -1){
        printf("Numero nao listado");
    }
    else{
        printf("Numero listado na posicao %d entre 0 a 9", x);
    }
}

