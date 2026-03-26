#include <iostream>

using namespace std;

const int N = 10;
int lista[N];
int comparacoes = 0;
int trocas = 0;

void preencher();
void exibir();
void trocar(int &a, int&b);
void ordenar(int inicio, int ultimo);

// Quick Sort
int main()
{
    preencher();

    ordenar(0, N - 1);

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

// ultimo elemento é o pivo 
void ordenar(int inicio, int ultimo)
{
    int ultimo_menores = inicio - 1;
    int pivo = ultimo;

    // Olhar cada elemento, passando os menores que o pivo para esquerda 
    for (int x = inicio; x < pivo; x++) // x acaba sendo tambem um indicador de onde acaba os maiores que o pivo
    {
        // Se elemeno menor que pivo
        if (lista[x] <= lista[pivo])
        {
            trocar(lista[x], lista[ultimo_menores + 1]); // troca pelo primeiro dos maiores
            ultimo_menores++; // indicador do ultimo numero dos menores aumenta
        }
        comparacoes++;
    }

    // Colocar pivo entre menores e maiores
    trocar(lista[pivo], lista[ultimo_menores + 1]);
    pivo = ultimo_menores + 1;

    // Se ainda ha mais de um elemento menor nao ordenado
    if (inicio < pivo - 1)
    {
        ordenar(inicio, pivo - 1);
    }

    // Se ainda ha mais de um elemeto maior nao ordenado
    if (pivo + 1 < ultimo) 
    {
        ordenar(pivo + 1, ultimo);
    }
}
