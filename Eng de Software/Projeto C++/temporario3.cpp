#include<iostream>
#include<cstdio>

using namespace std;

struct livro
{
    char nome[50];
    int paginas;
    char nome_autor[50];
};

int main(){
    int i,c;
    livro lista[10];

    for(i = 0; i<10; i++){
        cout<<"Digite o nome do livro :";
        gets(lista[i].nome);
        cout<<"Digite o numero de paginas : ";
        cin>>lista[i].paginas;
        cout<<"Digite o nome do autor : ";
        gets(lista[i].nome_autor);
    }

    cout<<"Escolha um livro de 1 a 10";
    cin>>c;

    cout<<lista[c-1].nome;
    cout<<"Numero de paginas : "<<lista[c-1].paginas;
}