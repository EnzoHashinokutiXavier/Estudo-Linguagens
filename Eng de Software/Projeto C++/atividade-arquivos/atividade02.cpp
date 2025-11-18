#include <iostream>
#include <stdio.h>   // para FILE, fopen, fscanf, fclose
#include <string.h>
#include <stdlib.h> // para atoi

using namespace std;

int main()
{
    // Abre o arquivo para leitura
    FILE *arquivo;
    arquivo = fopen("atividade02.txt", "r");
    if (arquivo == NULL)
    {
        cout << "Erro na abertura do arquivo";
        return 1;
    }

    int contador = 0, idadeMaisVelho = -1;
    char nomeMaisVelho[60]; 

    char linha[100];

    // Lê cada linha do arquivo
    while(fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        int condicao = 0, letra = 0;
        char id[5], nome[60], idade[5];
        // Verifica cada caractere da linha 
        for(int i = 0; linha[i]!='\n' && linha[i]!='\0'; i++)
        {
            if (linha[i] == ',')
            {
                switch (condicao){
                    case 0 : id[letra]='\0';condicao++;break; // primeira virgula muda de id para nome
                    case 1 : nome[letra]='\0';condicao++;break; // segunda virgula muda de nome para idade
                }
                letra = 0;
            }
            else
            {
                switch (condicao)
                {
                    case 0 : id[letra] = linha[i]; break;// registra id
                    case 1 : nome[letra] = linha[i]; break;// registra nome
                    case 2 : idade[letra] = linha[i]; break;// registra idade
                }
                letra++;
            }
        }
        idade[letra] = '\0';

        contador++;
        int idadeNumeric = atoi(idade);
        if (idadeNumeric > idadeMaisVelho)
        {
            idadeMaisVelho = idadeNumeric;
            strcpy(nomeMaisVelho, nome); 

        }
    }

    fclose(arquivo); // fecha o arquivo

    if (contador == 0)
    {
        cout << "Nenhum estudante encontrado." << endl;
        return 1;
    }

    cout << "Numero de estudantes lidos: " << contador << endl;
    cout << "Estudante mais velho: " << nomeMaisVelho << ", idade: " << idadeMaisVelho << endl;

    return 0;
}
