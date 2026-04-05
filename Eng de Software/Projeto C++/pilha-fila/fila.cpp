#include <iostream>

using namespace std;

void insercao(int lista[], int tamanho, int inicio, int &ultimo, int &quantia);
void remocao(int tamanho, int &inicio, int &quantia);
void exibir(int lista[], int tamanho, int inicio, int ultimo, int quantia);
int proximo(int tamanho, int ultimo);
int anterior(int tamanho, int inicio);

// Fila : FIFO (first in, first out)
int main()
{
    int tamanho = 0, escolha = 1, inicio = 0, ultimo = -1, quantia = 0;

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
                insercao(lista, tamanho, inicio, ultimo, quantia);
                break;
            case 2:
                remocao(tamanho, inicio, quantia);
                break;
            case 3:
                exibir(lista, tamanho, inicio, ultimo, quantia);
                break;
            default:
                cout<<"\nNumero invalido";
                break;
        }

    }

    return 0;
}

void insercao(int lista[], int tamanho, int inicio, int &ultimo, int &quantia)
{
    // Define proximo local na lista
    int seguinte = proximo(tamanho, ultimo);

    // Se array nao esta cheia, registra novo numero
    if(quantia == tamanho)
    {
        cout<<"\nLista cheia";
    }
    else
    {
        cout<<"\nInforme um numero : ";
        cin>>lista[seguinte];
        ultimo = seguinte;
        quantia++;
    }
}

void remocao(int tamanho, int &inicio, int &quantia)
{
    // Se quantia maior do que 0
    if (quantia > 0)
    {
        // Inicio se torna o proximo elemento
        inicio = proximo(tamanho, inicio);
        quantia--;
    }
    else
    {
        cout<<"\nVetor vazio";
    }
}

void exibir(int lista[], int tamanho, int inicio, int ultimo, int quantia)
{
    if (quantia > 0)
    {
        int i = inicio;
        cout<<"\nFila esquerda-direita : ";
        for (int contador = 0; contador < quantia; contador++)
        {
            cout<<lista[i]<<", ";
            i = proximo(tamanho, i);
        }
    }
    else
    {
        cout<<"\nVetor vazio";
    }
}   

int proximo(int tamanho, int localizacao)
{
    int seguinte;
    // verifica se chegou ao final da array
    if (localizacao == tamanho - 1)
    {
        seguinte = 0;
    }
    else
    {
        seguinte = localizacao + 1;
    }

    return seguinte;
}
