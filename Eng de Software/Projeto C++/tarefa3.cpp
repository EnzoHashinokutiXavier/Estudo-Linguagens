#include<iostream>

using namespace std;

void verificar(int x){
    int unidade, dezena;

    unidade = x % 10;
    dezena = (x - unidade) / 10;

    if (unidade == dezena){
        cout<<"O numero digitado eh capicua";
    }
    else{
        cout<<"O numero digitado nao eh capicua";
    }
}

int main(){
    int n;

    cout<<"Informe um numero inteiro de dois digitos : ";
    cin>>n;

    verificar(n);
}