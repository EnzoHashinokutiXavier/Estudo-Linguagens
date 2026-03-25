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
int encontrar_menor(int p);

// Selection Sort
int main()
{
    preencher();

    // Ultimo numero da parte ordenada
    for (int i = 0; i < N - 1; i++) // ultimo ja vai estar ordenado apos ordnar o restante dos numeros
    {
        ordenar(i);
    }

    exibir();
}

void preencher()
{
    for (int x = 0; x < N; x++)
    {
        cout<<"\nDigite um numero ("<<x+1<<"/"<<N<<") : ";
        cin>>lista[x];
    }
}

void exibir()
{
    cout<<"Lista ordenada : ";
    for (int x = 0; x < N; x++)
    {
        cout<<lista[x]<<", ";
    }
    cout<<"\nComparacoes : "<<comparacoes;
    cout<<"\nQuantia de trocas : "<<trocas;
}

void trocar(int &a, int&b)
{
    int aux = a;
    a = b;
    b = aux;
    trocas++;
}

void ordenar(int n)
{
    int menor = encontrar_menor(n);
    if (menor != n) // se o menor nao estiver ordenado
    {
        trocar(lista[n], lista[menor]); // passar para posição correta
    }
}

int encontrar_menor(int p)
{
    int menor = p;
    for (int x = p + 1; x < N; x++)
        {
            if (lista[x] < lista[menor])
            {
                menor = x;
            }
            comparacoes++;        
        }
    return menor;
}