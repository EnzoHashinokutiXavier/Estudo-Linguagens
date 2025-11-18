#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{

FILE *p;
char cadeia[30];
p = fopen ("exemplo.txt","r");
if (p == NULL)

cout << "Erro na abertura." << endl;

else
{

while (!feof(p))
{

fgets(cadeia, 30, p);
if (ferror(p))

cout << "\nErro na leitura!";

else

cout << "\nCadeia lida: " << cadeia;

}

}
fclose(p);
return 0;

}