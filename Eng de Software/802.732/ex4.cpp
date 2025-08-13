#include <iostream>

using namespace std;

int main(){
    // Declaração de variaveis
    int codigoCliente, tipoConta;
    float valorInvestido, rendimentoMensal, totalInvestimentos = 0, totalJuros = 0;

    cout<<"Digite o codigo do cliente : ";
    cin>>codigoCliente;

    do{
        // Requisição de tipo de conta do cliente
        cout<<"[1]Poupansa\n[2]Poupansa Plus\n[3]Fundos de Renda Fixa\nDigite o tipo de conta :";
        cin>>tipoConta;

        // Requisição do valor investido
        cout<<"Digite o valor investido : ";
        cin>>valorInvestido;
        totalInvestimentos += valorInvestido;

        // Calculo de investimentos baseado no tipo de conta do cliente
        if(tipoConta == 1){
            rendimentoMensal = valorInvestido * 0.015;
            cout<<"Investimento mensal : "<<rendimentoMensal;
        }
        else{
            if(tipoConta == 2){
                rendimentoMensal = valorInvestido * 0.02;
                cout<<"Investimento mensal : "<<rendimentoMensal;
            }
            else{
                if(tipoConta == 3){
                rendimentoMensal = valorInvestido * 0.04;
                cout<<"Investimento mensal : "<<rendimentoMensal;
                }
                // Caso tipo de conta invalido, erro de mensagem 1
                else{
                    cout<<"ERRO";
                    return 1;
                }
            }
        }
        totalJuros += rendimentoMensal;

        // Requisição do codigo do cliente
        cout<<endl<<"Digite o codigo do cliente (Digite 0 para sair) : ";
        cin>>codigoCliente;

    // Se digitado 0, fim do loop
    }while(codigoCliente > 0);

    // Exibição do total investido e retornado em juros
    cout<<"Total de investimentos : "<<totalInvestimentos<<endl;
    cout<<"Total de juros : "<< totalJuros;
}