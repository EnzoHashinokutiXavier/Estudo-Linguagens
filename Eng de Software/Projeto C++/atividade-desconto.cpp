#include <iostream>

using namespace std;

void calcularDesconto(float &valorPagamento, float taxaDesconto, float &totalDesconto){
    totalDesconto = (valorPagamento * taxaDesconto)/100;
    valorPagamento -= totalDesconto;
}


void exibir(float original, float porcentagem, float desconto, float final){
    cout<<"Valor original : "<< original<<endl;
    cout<<"Desconto ("<<porcentagem<<"%) : "<<desconto<<endl;
    cout<<"Valor final : "<<final<<endl;
}


int main(){
    float valorInicial, valorFinal, valorDesconto, taxa;

    cout<<"Informe o valor total da compra :\n";
    cin>>valorInicial;
    cout<<"Informe a taxa de desconto (%) :\n";
    cin>>taxa;

    valorFinal = valorInicial;
    valorDesconto = 0;

    calcularDesconto(valorFinal, taxa, valorDesconto);
    exibir(valorInicial, taxa, valorDesconto, valorFinal);

    return 0;
}