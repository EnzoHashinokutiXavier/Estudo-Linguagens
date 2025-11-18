#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main ()
{
    char nome[100], cpf[100], dataNascimento[100], endereco[100], e[100];

    FILE *arquivo;
    arquivo = fopen("atividade01.txt", "w");
    if (arquivo == NULL)
    {
        cout<<"Erro na abertura do arquivo";
        return 1;
    }
    
    do
    {
        cout<<"Informe o nome : ";
        gets(nome);
        fputs(nome, arquivo);
        fputs("\n", arquivo);
        cout<<"Informe o CPF : ";
        gets(cpf);
        fputs(cpf, arquivo);
        fputs("\n", arquivo);
        cout<<"Informe a data de nascimento : ";
        gets(dataNascimento);
        fputs(dataNascimento, arquivo);
        fputs("\n", arquivo);
        cout<<"Informe o endereço : ";
        gets(endereco);
        fputs(endereco, arquivo);
        fputs("\n\n", arquivo);

        if(ferror(arquivo))
        {
            cout<<"Erro ao registrar";
            return 1;
        }

        cout<<"Deseja fazer um novo registro ? (sim/nao)";
        gets(e);
    } while (stricmp(e, "sim") == 0);
    fclose(arquivo);
    return 0;
}