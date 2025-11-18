#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{
// fopen para abrir arquivo
FILE *p;
p = fopen ("exemplo.txt","w");
if (p == NULL){
cout << "Erro na abertura do arquivo. Fim de programa!";
}
else{
cout << "\nArquivo Criado com Sucesso!\n";
}
return 0;

}