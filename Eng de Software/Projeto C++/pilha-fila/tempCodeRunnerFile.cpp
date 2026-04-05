#include <iostream>

using namespace std;

void insercao(int lista[], int tamanho, int inicio, int &fim, int &quantia);
void remocao(int &tamanho, int &inicio, int &quantia);
void exibir(int lista[], int tamanho, int inicio, int fim);
int proximo(int tamanho, int fim);
int anterior(int tamanho, int inicio);

// Fila : FIFO (first in, first out)
int main()
{
    int tamanho = 0, escolha = 1, inicio = 0, fim = 0, quantia = 0;

    // Definir tamanho da array
    cout<<"Informe o tamanho do vetor : ";
    while(tamanho < 1)
    {
        cin>>tamanho;
    }
    int lista[tamanho];

    // Usuario informa funcao a ser usada
    while(escolha != 0)
    {
        cout<<"\n[1]Insercao\n[2]Remocao\n[3]Exibir\n[0]Sair\n";
        cin>>escolha;

        // Chama funcoes
        switch (escolha)
        {
            case 0:
                cout<<"\nTchau!";
                break;
            case 1:
                insercao(lista, tamanho, inicio, fim, quantia);
                break;
            case 2:
                remocao(tamanho, inicio, quantia);
                break;
            case 3:
                exibir(lista, tamanho, inicio, fim);
                break;
            default:
                cout<<"\nNumero invalido";
                break;
        }

    }

    return 0;
}

void insercao(int lista[], int tamanho, int inicio, int &fim, int &quantia)
{
    // Define proximo local na lista
    int seguinte;
    if (fim == tamanho)
    {
        seguinte = 0;
    }
    else
    {
        seguinte = fim;
    }

    // Se array nao esta cheia, registra novo numero
    if(quantia == tamanho)
    {
        cout<<"\nLista cheia";
    }
    else
    {
        cout<<"\nInforme um numero : ";
        cin>>lista[seguinte];
        fim = seguinte + 1;
        quantia++;
    }
}

void remocao(int &tamanho, int &inicio, int &quantia)
{
    // Se quantia maior do que 0
    if (quantia > 0)
    {
        // Inicio se torna o proximo elemento
        inicio = proximo(tamanho, (inicio+1));
        quantia--;
    }
    else
    {
        cout<<"\nVetor vazio";
    }
}

void exibir(int lista[], int tamanho, int inicio, int fim)
{
    cout<<"\nFila esquerda-direita : ";
    for (int i = inicio; i != fim; i = proximo(tamanho, i + 1))
    {
        cout<<lista[i]<<", ";
    }
}   

int proximo(int tamanho, int fim)
{
    int seguinte;
    // verifica se chegou ao final da array
    if (fim == tamanho)
    {
        seguinte = 0;
    }
    else
    {
        seguinte = fim;
    }

    return seguinte;
}
