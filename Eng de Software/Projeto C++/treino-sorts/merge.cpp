#include <iostream>
#include <cstdlib>

using namespace std;

const int N = 10;
int lista[N];
int comparacoes = 0;
int trocas = 0;

void preencher();
void exibir();
void trocar(int &a, int&b);
void ordenar (int inicio, int meio, int fim);
void dividir(int inicio, int fim);

// Merge Sort
int main()
{
    preencher();

    dividir(0, N-1);

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

// Divide e depois arruma
void dividir(int inicio, int fim)
{
    int meio = inicio + (fim - inicio)/2;

    // Se não se resume a duas listas de um elemento, subdivide
    if (inicio < fim)
    {
        // Chamada recursiva dividindo em duas listas
        dividir(inicio, meio);
        dividir(meio + 1, fim);
        // Volta organizando os elementos das divisoes
        ordenar(inicio, meio, fim);
    }

}

// Juntar as divisoes organizando elementos
void ordenar (int inicio, int meio, int fim)
{
    // Tamanho da primeira divisao : do inicio ao meio + 1
    int n1 = meio + 1 - inicio;
    // Tamanho da segunda divisao : do meio ao fim
    int n2 = fim - meio;

    // pegar trechos e alocar com malloc
    int *esquerda = (int*)malloc(n1 * sizeof(int)); // cria ponteiros que apontam para listas
    int *direita = (int*)malloc(n2 * sizeof(int));

    // Copia trechos nas listas alocadas
    for (int x = 0; x < n1; x++)
    {
        esquerda[x] = lista[x + inicio];
    }
    for (int y = 0; y < n2; y++)
    {
        direita[y] = lista[y + meio + 1];
    }

    // Compara menor entre o menor de cada lista até alguma ser passada por completo
    int a = 0, b = 0, c = inicio; // a = divisao esquerda, b = divisao direita, c = lista principal
    while (a < n1 && b < n2)
    {
        if (esquerda[a] < direita[b])
        {
            trocar(lista[c], esquerda[a]);
            a++;
        }
        else
        {
            trocar(lista[c], direita[b]);
            b++;
        }
        comparacoes++;
        c++;
    }
    
    // Termina de passar os elementos da lista que sobrou
    while (a < n1)
    {
        trocar(lista[c], esquerda[a]);
        a++;
        c++;
    }
    while (b < n2)
    {
        trocar(lista[c], direita[b]);
        b++;
        c++;
    }

    // Libera espaço na memoria
    free(esquerda);
    free(direita);
}
