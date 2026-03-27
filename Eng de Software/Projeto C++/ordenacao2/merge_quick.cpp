#include<iostream>
#include<cstdlib>

using namespace std;

void mergesort(int lista[], int inicio, int fim);
void organizar(int lista[], int inicio, int meio, int fim);
void quicksort(int lista[], int inicio, int ultimo);
void trocar(int &a, int &b);

int trocas = 0;
int comparacoes = 0;

int main()
{
    // Definir tamanho da lista
    int tamanho;
    cout<<"Informe tamanho da lista para ser ordenada : ";
    cin>>tamanho;

    // Preencher lista
    int lista[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        cout<<"Informe um numero ("<<i+1<<"/"<<tamanho<<") : ";
        cin>>lista[i];
    }

    // Selecionar algoritmo de ordenação
    int escolha = 0;
    while(escolha != 1 && escolha != 2)
    {
        cout<<"\n[1]Merge Sort\n[2]Quick Sort\nEscolha um algoritmo de ordencao : ";
        cin>>escolha;
    }

    // Exibir lista nao ordenada
    cout<<"\nLista entrada : ";
    for (int i = 0; i < tamanho; i++)
    {
        cout<<lista[i]<<", ";
    }

    // Ordenar lista
    if (escolha == 1)
    {
        mergesort(lista, 0, tamanho - 1);
    }
    else
    {
        quicksort(lista, 0, tamanho - 1);
    }

    // Exibir lista ordenada
    cout<<"\nLista ordenada : ";
    for (int i = 0; i < tamanho; i++)
    {
        cout<<lista[i]<<", ";
    }
    cout<<"\nNumero de trocas : "<<trocas;
    cout<<"\nNumero de comparacoes : "<<comparacoes;

    return 0;
}

void mergesort(int lista[], int inicio, int fim)
{
    // Separa em duas partes
    int meio = inicio + (fim - inicio) / 2;

    // Divide ate ficar unidades
    if (inicio < fim)
    {
        mergesort(lista, inicio, meio);
        mergesort(lista, meio + 1, fim);

        // Junta organizando na ordem correta
        organizar(lista, inicio, meio, fim);
    }

}

void organizar(int lista[], int inicio, int meio, int fim)
{
    // Define tamanho das sublistas
    int tamanho_esquerda = meio - inicio + 1;
    int tamanho_direita = fim - meio;

    // Aloca espaço na memoria para sublistas
    int *esquerda = (int*)malloc(tamanho_esquerda * sizeof(int));
    int *direita = (int*)malloc(tamanho_direita * sizeof(int));

    // Preenche sublistas
    for (int i = inicio; i <= meio; i++)
    {
        esquerda[i - inicio] = lista[i];
    }
    for ( int i = (meio + 1); i <= fim; i++)
    {
        direita[i - (meio + 1)] = lista[i];
    }

    // Organiza elementos na lista principal até chegar ao fim de uma lista
    int n1 = 0, n2 = 0, loc = inicio;
    while(n1 < tamanho_esquerda && n2 < tamanho_direita)
    {
        // Ve qual elemento é menor e aloca na lista principal
        if (esquerda[n1] <= direita[n2])
        {
            lista[loc] = esquerda[n1];
            n1++;
        }
        else
        {
            lista[loc] = direita[n2];
            n2++;
        }
        loc++;
        comparacoes++;
    }

    // Termina de passar os elementos restantes
    while(n1 < tamanho_esquerda)
    {
        lista[loc] = esquerda[n1];
        n1++;
        loc++;
    }
    while(n2 < tamanho_direita)
    {
        lista[loc] = direita[n2];
        n2++;
        loc++;
    }

    // Libera espaço na memoria
    free(esquerda);
    free(direita);
}

void quicksort(int lista[], int inicio, int ultimo)
{
    // Define ultimo como pivo
    int pivo = ultimo;

    // Define separcao dos menores que pivo
    int ultimo_menor = inicio - 1; // como de inicio nenhum verificado, divisoria inicia antes da lista

    // Verifica cada item da lista ate chegar no pivo
    for (int i = inicio; i < pivo; i++)
    {
        // Verifica se numero é menor ou igual ao pivo
        if (lista[i] <= lista[pivo])
        {
            ultimo_menor++; // aumenta divisoria dos menores
            trocar(lista[i], lista[ultimo_menor]); // aloca elemento como ultimo dos menores
        }
        comparacoes++;
    }

    // Se houver maiores
    if(pivo > ultimo_menor + 1)
    {
        // Colocar pivo entre menores e maiores
        trocar(lista[pivo], lista[ultimo_menor + 1]); 
        pivo = ultimo_menor + 1; 
    }

    // Se houver mais de um maior
    if(pivo < ultimo - 1)
    {
        // chamada recursiva dos elementos a direita do pivo
        quicksort(lista, pivo + 1, ultimo);
    }

    // Se houver mais de um antes do pivo
    if (pivo > inicio + 1)
    {
        // chamada recursiva dos elementos a esquerda do pivo
        quicksort(lista, inicio, ultimo_menor);
    }
}

// Trocar elementos
void trocar(int &a, int &b) // recebe a localização dos elementos
{
    int aux = a;
    a = b;
    b = aux;
    trocas++;
}