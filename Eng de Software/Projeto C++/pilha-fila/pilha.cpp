#include <iostream>

using namespace std;

void insercao(int lista[], int tamanho, int &fim);
void remocao(int lista[], int tamanho, int &fim);
void exibir(int lista[], int tamanho, int fim);

// Pilha : LIFO (last in, first out)
int main()
{
    int tamanho = 0, escolha = 1, fim = 0;

    // Definir tamanho do vetor
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
                insercao(lista, tamanho, fim);
                break;
            case 2:
                remocao(lista, tamanho, fim);
                break;
            case 3:
                exibir(lista, tamanho, fim);
                break;
            default:
                cout<<"\nNumero invalido";
                break;
        }

    }

    return 0;
}

void insercao(int lista[], int tamanho, int &fim)
{
    // Se o vetor ja nao estiver completamente preenchido
    if (fim < tamanho) 
    {
        // Adiciona numero
        cout<<"\nInforme um numero : ";
        cin>>lista[fim];
        fim++;
    }
    else
    {
        cout<<"\nVetor ja esta preenchido";
    }
}

void remocao(int lista[], int tamanho, int &fim)
{
    // Se o vetor tiver pelo menos um elemento
    if (fim > 0)
    {   
        // Reduz o indicador do fim dos elementos
        fim--;
    }
    else
    {
        cout<<"\nVetor vazio";
    }
}

void exibir(int lista[], int tamanho, int fim)
{
    cout<<"\nPilha base-topo : ";
    for (int i = 0; i < fim; i++)
    {
        cout<<lista[i]<<", ";
    }
}   