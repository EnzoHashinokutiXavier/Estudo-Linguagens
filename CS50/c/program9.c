#include <stdio.h>

void notas(int tamanho, float lista_qualquer[]);

int main()
{
    const int N = 4;    // valor de N nao muda
    float lista[N];     // N é a quantia de espaços na lista
    int i;

    for (i = 0; i < N; i++)
    {
        printf("Digite a nota da prova %d :\n", i + 1);
        scanf("%f", &lista[i]);
    }
    
    notas(N, lista);

    printf("Media : %.1f",((lista[0] + lista[1] + lista[2] + lista[3])/N));

    return 0;
}

void notas(int tamanho, float lista_qualquer[]){
    int i;
    printf("Notas : %.1f, %.1f, %.1f, %.1f\n", lista_qualquer[0], lista_qualquer[1], lista_qualquer[2], lista_qualquer[3]);
}