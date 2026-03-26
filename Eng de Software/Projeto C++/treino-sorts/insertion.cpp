#include <iostream>

using namespace std;

const int N = 10;
int lista[N];
int comparacoes = 0;
int trocas = 0;

void preencher();
void exibir();
void trocar(int &a, int&b);
void ordenar(int n);

// Insertion Sort
int main()
{
    preencher();

    // Numero a ser verificado
    for (int i = 1; i < N; i++) // primeira casa ja esta ordenada, começa na casa 1
    {
        ordenar(i); // troca até a posição correta
    }

    exibir();
    return 0;
}

// Pede ao usuario informar numeros para preencher a lista
void preencher()
{
    for (int x = 0; x < N; x++)
    {
        cout<<"\nDigite um numero ("<<x+1<<"/"<<N<<") : ";
        cin>>lista[x];
    }
}

// Mostra no console a lista em ordem crescente e informações 
void exibir()
{
    cout<<"Lista ordenada : ";
    for (int x = 0; x < N; x++)
    {
        cout<<lista[x]<<", ";
    }
    cout<<"\nComparacoes : "<<comparacoes;
    cout<<"\nTrocas : "<<trocas;
}

// Troca valores das variaveis
void trocar(int &a, int&b)
{
    int aux = a;
    a = b;
    b = aux;
    trocas++;
}

// Aloca numero na sua posição correta da parte ordenada
void ordenar(int n)
{
    if (n > 0) // para ao chegar na primeira casa
    {
        if (lista[n] < lista[n - 1]) // compara se o numero anterior é menor
        {
            trocar(lista[n], lista[n-1]); // troca
            ordenar(n-1); // chamada recursiva até encontrar posição correta do numero
        }
        comparacoes++;
    }
}
