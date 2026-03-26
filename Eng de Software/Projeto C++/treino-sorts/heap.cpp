#include <iostream>

using namespace std;

const int N = 10;
int lista[N];
int comparacoes = 0;
int trocas = 0;
int fim_heap = N - 1;

void preencher();
void exibir();
void trocar(int &a, int&b);
void ordenar();
void heapify(int n);

int main()
{
    preencher();

    // Heapify a array
    for (int i = N/2 - 1; i >= 0; i--) // todos nos com filho, de baixo para cima
    {
        heapify(i);
    }

    // Ordena até chegar ao topo
    while (fim_heap > 0)
    {
        ordenar();
    }

    exibir();
    return 0;
}

void preencher()
{
    for (int i = 0; i < N; i++)
    {
        cout<<"\nDigite um numero ("<<i+1<<"/"<<N<<") : ";
        cin>>lista[i];
    }
}

void exibir()
{
    cout<<"Lista ordenada : ";
    for (int i = 0; i < N; i++)
    {
        cout<<lista[i]<<", ";
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

void ordenar()
{
    // Passa maior numero para o fim do heap
    trocar(lista[0], lista[fim_heap]);
    // Diminui o heap
    fim_heap--;
    heapify(0);
}

// Forma heap com topo sendo maior elemento
void heapify(int n)
{
    // Define filhos esquerdo e direito do nó
    int esquerdo = 2 * n + 1;
    int direito = 2 * n + 2;
    int maior = n;

    // Encontra o maior
    if(esquerdo <= fim_heap) // se existe filho esquerdo
    {
        if (lista[esquerdo] > lista[maior])
        {
            maior = esquerdo;
        }
        comparacoes++;
    }
    if(direito <= fim_heap) // se existe filho direito
    {
        if (lista[direito] > lista[maior])
        {
            maior = direito;
        }
        comparacoes++;
    }

    // Substitui se necessario
    if (maior != n)
    {
        //troca o maior com o nó pai
        trocar(lista[maior], lista[n]);
        // aonde esta o pai que desceu, é verificado se ja esta no lugar certo 
        heapify(maior);
    }

}