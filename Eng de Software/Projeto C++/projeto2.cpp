#include <iostream>

using namespace std;

int main(){
    float salario, financiamento;

    cout<<"Digite o valor do seu salario : ";
    cin>>salario;
    cout<<"Digite o valor da parcela do financiamento : ";
    cin>>financiamento;

    if(financiamento <= (salario / 10)*3){
        cout<<"Financiamento aprovado !";
    }
    else{
        cout<<"Financiamento negado !";
    }

}