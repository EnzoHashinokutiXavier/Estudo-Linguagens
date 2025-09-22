#include<iostream>
#include<cstdio>

using namespace std;

struct obra{
    int codigo;
    char doacao;
    char nomeObra[50];
    char nomeAutor[50];
};

int main(){
    int i, c, e;
    char r;
    bool continuar = true, encontrou;
    obra lista[100];

    i = 0;
    do{
        cout<<"Informe o codigo da obra : ";
        cin >>lista[i].codigo;
        cout<<"É doado s/n : ";
        cin >>lista[i].doacao;
        cin.ignore();
        cout<<"Nome da obra : ";
        cin.getline(lista[i].nomeObra, 50);
        cout<<"Nome do autor : ";
        cin.getline(lista[i].nomeAutor, 50);
        i++;

        cout<<"Deseja registrar mais uma obra ? (n para negar) : ";
        cin >>r;
        if (r == 'n'){
            continuar = false;
        }
        cin.ignore(); 
    }while (continuar);

    while (true) {
        cout<<"Informe o codigo da obra que deseja ver (1 para sair) : ";
        cin >>e;
        if (e == 1){
            break;
        }

        encontrou = false;
        for (c = 0; c < i; c++){
            if(lista[c].codigo == e){
                cout<<"Nome da obra : "<<lista[c].nomeObra<<endl;
                cout<<"Nome do autor : "<<lista[c].nomeAutor<<endl;
                cout<<"É doacao ? : "<<lista[c].doacao<<endl;
                encontrou = true;
                break;
            }
        }
        if (!encontrou){
            cout<<"Obra nao encontrada !"<<endl;
        }
    }
}