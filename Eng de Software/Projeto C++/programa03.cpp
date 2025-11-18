#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{

FILE *p;
char carac;
p = fopen ("exemplo.txt","a");
if (p == NULL){
cout << "Erro na abertura!" << endl;
}
else{
cout << "\nDigite um caractere: ";
cin >> carac;
}
while (carac != '0')
{

fputc(carac, p);  // fputc para adicionar caractere
if (ferror(p)){
cout << "\nErro na gravação!";
}
else
{
cout << "\nDigite outro caractere: ";
cin >> carac;
}

}
fclose(p);
return 0;

}