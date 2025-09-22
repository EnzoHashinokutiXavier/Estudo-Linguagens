#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main(){
    int x, y, c;
    char nome[50], outro_nome[50];

    cout<<"Informe um nome : ";
    gets(nome);
    x = strlen(nome);

    cout<<"Informe um nome : ";
    gets(outro_nome);
    y = strlen(outro_nome);

    cout<<"O primeiro nome tem "<<strlen(nome)<<" caracteres"<<endl;

    if(x == y)
        cout<<"Nomes de tamanho igual"<<endl;

    if(strcmp(nome, outro_nome) == 0)
        cout<<"Nomes iguais"<<endl;
    else
        cout<<"Nomes diferentes"<<endl;

    cout<<strupr(nome)<<endl;
    cout<<strlwr(outro_nome)<<endl;

    strlwr(nome);
    nome[x-1] = toupper(nome[x-1]);
    cout<<"Primeiro nome com ultima letra maiuscula : "<< nome;
    
}