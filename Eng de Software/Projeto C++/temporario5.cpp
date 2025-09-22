#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main(){
    int tamanho, i;
    char frase[50], frase_inversa[50];
    
    cout<<"Digite uma frase : ";
    gets(frase);

    tamanho = strlen(frase) - 1;

    for(i = tamanho; i >= 0; i--){
        frase_inversa[(tamanho - i)] = frase[i];
    }

    cout<<frase_inversa;


    if(frase == frase_inversa)
        cout<<"Eh palindromo";
    else
        cout<<"Nao eh palindromo";
}