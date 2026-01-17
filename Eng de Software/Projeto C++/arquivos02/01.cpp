#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    FILE *p = fopen("cliente.txt", "w");
    if (p == NULL)
    {
        cout<<"falha ao abrir arquivo cliente.txt";
        return 1;
    }

    fprintf(p, "Numero do Cliente;Nome\n");
    fclose(p);

    FILE *arquivo = fopen("conta_bancaria.txt", "w");
    if (arquivo == NULL)
    {
        cout<<"falha ao abrir arquivo conta_bancaria.txt";
        return 1;
    }

    fprintf(arquivo, "Numero da conta;Numero do Cliente;Saldo\n");
    fclose(arquivo);

    return 0;
}