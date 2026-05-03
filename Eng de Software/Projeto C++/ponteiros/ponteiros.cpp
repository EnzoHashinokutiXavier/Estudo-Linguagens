#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "\nInforme o tamanho da lista dinamica: ";
    cin >> n;

    if (n <= 0) {
        cout << "\nTamanho invalido!";
        return 1;
    }

    // Alocação em C++
    int *vetor = new int[n];

    int *ponteiro = vetor;

    // Preenchimento
    for (int i = 0; i < n; i++)
    {
        cout << "\nInforme um valor: ";
        cin >> *ponteiro;
        ponteiro++;
    }

    // Reset
    ponteiro = vetor;

    int soma = 0;
    int maior = *ponteiro;
    int menor = *ponteiro;

    // Exibição + cálculo
    for (int i = 0; i < n; i++)
    {
        cout << "\nEndereco: " << (void*)ponteiro 
             << " | Valor: " << *ponteiro;

        soma += *ponteiro;

        if (*ponteiro > maior) maior = *ponteiro;
        if (*ponteiro < menor) menor = *ponteiro;

        ponteiro++;
    }

    cout << "\nSoma: " << soma;
    cout << "\nMaior: " << maior;
    cout << "\nMenor: " << menor;

    // Liberação correta em C++
    delete[] vetor;

    return 0;
}