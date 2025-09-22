#include<iostream>

using namespace std;

void reajuste(int tempo, float salario){
    float reajuste;

    if (tempo < 10){
        reajuste = salario * 1.1;
    }
    else{
        reajuste = salario * 1.15;
    }

    cout<<"Salario reajustado : "<<reajuste;
}

int main(){
    int anos;
    float salario;

    cout<<"Informe a quantia de anos de servisso de um funcionario : ";
    cin>>anos;

    cout<<"Informe o salario do funcionario : ";
    cin>>salario;

    reajuste(anos, salario);
}