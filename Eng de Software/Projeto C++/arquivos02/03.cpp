#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    FILE *p = fopen("cliente.txt", "r");
    if (p == NULL)
    {
        cout<<"falha ao abrir arquivo cliente.txt";
        return 1;
    }
    FILE *conta = fopen("conta_bancaria.txt", "w");
    if (conta == NULL)
    {
        cout<<"falha ao abrir arquivo conta_bancaria.txt";
        return 1;
    }

    int contador = 0;
    char linha[200];  // string de 200 espaços para armazenar linha
    
    fprintf(conta, "Numero da conta;Numero do Cliente;Saldo\n");
    // Lendo todas linhas
    while(fgets(linha, sizeof(linha), p))
    {
        // Encontra ; e substitui por \0
        for (int i = 0; i < sizeof(linha); i++)
        {
            if(linha[i] == ';')
            {
                linha[i] = '\0';
                break;
            }
        }

        if (contador > 0)
        {
            int numero_cliente = atoi(linha);  // converte linha de string para inteiro 
            float saldo_cliente;

            cout<<"Informe o saldo do cliente "<<numero_cliente<<" :"<<endl;
            cin >> saldo_cliente;

            // registra informações em conta_bancaria.txt
            fprintf(
                conta,
                "%d;%d;%.2f\n",
                contador,
                numero_cliente,
                saldo_cliente
            );

        }
        contador++; // contador de linhas / usuarios
    }

    fclose(p);
    fclose(conta);
    return 0;
}