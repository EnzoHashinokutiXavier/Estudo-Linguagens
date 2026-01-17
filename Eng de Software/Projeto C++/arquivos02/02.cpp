#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    FILE *p = fopen("cliente.txt", "a");
    if (p == NULL)
    {
        cout<<"falha ao abrir arquivo";
        return 1;
    }
    
    while(true)
    {
        char resposta;

        cout<<"Registrar usuario ? (s/n)";
        cin>>resposta;
        
        if (resposta == 's')
        {
            int numero_do_cliente;
            char nome_do_cliente[40];
            cout<<"Informe o numero do cliente : ";
            cin>>numero_do_cliente;
            cout<<"Informe o nome do cliente : ";
            cin>> nome_do_cliente;
            
            fprintf(p, "%d;%s\n", numero_do_cliente, nome_do_cliente);
        }
        else 
        {
            break;
        }
    }

    fclose(p);
    return 0;
}