#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main(){
    int i, contador = 0;
    char nome[20] ,menor_nome[20] = "vazio", maior_nome[20] = "vazio";

    for(i = 0; i < 10; i++){
        cout<<"Informe um nome : ";
        gets(nome);

        // Salva o nome digiado no primeiro loop
        if (maior_nome == "vazio"){
            maior_nome = nome;
        }
        if(menor_nome == "vazio"){
            menor_nome = nome;
        } 

        // se o nome digitado for maior que o maior armazenado, substitui
        if(strlen(nome) > strlen(maior_nome)){
            maior_nome = nome;
        }
        // se o nome digitado for menor que o menor armazenado, substitui
        if(strlen(nome) < strlen(menor_nome)){
            menor_nome = nome;
        }

        // se o nome termina em a
        if(nome[strlen(nome) - 1] == "a"){
            contador++;
        }

    }

    cout<< "Maior nome : "<< maior_nome<< endl;
    cout<< "Menor nome : "<< menor_nome<< endl;
    cout<< "Quantos nomes terminam em A : "<< contador<<endl;

}