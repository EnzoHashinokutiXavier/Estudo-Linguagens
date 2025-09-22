#include<iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char nome[50], copia_nome[50];

    cout<<"Digite seu nome : ";
    gets(nome);

    cout<<endl<<nome;

    strcpy(copia_nome, nome);

    cout<<endl<<copia_nome<<endl;

    strcat(nome, copia_nome);

    cout<<nome;

    return 0;
}