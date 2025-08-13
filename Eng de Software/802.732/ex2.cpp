#include<iostream>

using namespace std;

int main(){
    // Declaração da variável usada para armazenar o índice de poluição
    int nivelPoluicao;

    // Requisição de um valor para o índice
    cout<<"Digite o numero representando o indice de poluissao :";
    cin>>nivelPoluicao;

    // Se índice menor que 35, agradável
    if(nivelPoluicao < 35){
        cout<<"Indice de poluissao agradavel";
    }
    else{
        // Se igual ou maior que 35 e menor que 60, desagradavel
        if(nivelPoluicao <= 60){
            cout<<"Indice de poluissao desagradavel";
        }
        //Se maior que 60, perigoso
        else{
            cout<<"Indice de poluissao perigoso";
        }
    }

    return 0;
}