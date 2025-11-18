#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
    FILE *p;
    char carac;
    p = fopen ("exemplo.txt","r");  // fopen para abrir arquivo
    if (p == NULL)
        cout << "Erro na abertura!" << endl;
    else{
        cout << "Caracteres lidos:";
        while (!feof(p)){  // feof para identificar fim do arquivo
        {
            carac = fgetc(p);  // fgetc para pegar caractere
            if (ferror(p))
                cout << "\nErro na leitura!";
            else
                cout << carac;
        }
    }
    fclose(p);  // fclose para fechar arquivo
    return 0;
    }
}
