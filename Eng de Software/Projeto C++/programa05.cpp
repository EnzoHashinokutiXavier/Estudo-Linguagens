#include <iostream>
#include<string.h>
#include <stdio.h>
using namespace std;
int main ()
{

FILE *p;
char cadeia[30];
p = fopen ("exemplo.txt","a");
if (p == NULL)

cout << "Erro na abertura!" << endl;

else
{

cout << "\nDigite uma cadeia de caracteres: ";
gets (cadeia);
while (stricmp(cadeia, "fim")!= 0)//compara duas cadeias
{

fputs(cadeia, p);  // fputs para armazenar strig 
if (ferror(p))

cout << "\nErro de gravacao!";

else

cout << "\nGravacao com sucesso!";

cout << "\n\nDigite outra cadeia: ";
gets(cadeia);

}

}
fclose(p);
return 0;

}