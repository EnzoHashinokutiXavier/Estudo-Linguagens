#include <iostream>

using namespace std;

int main(){
    // Declaração de variáveis
    float odometroInicio, odometroFinal, kmTotal, lCombustivel, dinheiroTotal, consumoCombustivel, gastoCombustivel;
    // Definição de valor do litro de gasolina
    const float valorGasolina = 6.24;

    // Requisição do valor do odômetro do carro no inicio e final do dia
    cout<<"Digite a kilometragem no inicio do dia : ";
    cin>>odometroInicio;
    cout<<"Digite a kilometragem no final do dia : ";
    cin>>odometroFinal;

    // Calculo da kilometragem percorrida no dia
    kmTotal = odometroFinal - odometroInicio;

    // Requisição da quantia de litros de combustível gastos no dia
    cout<<"Digite a quantia de litros gastos no dia : ";
    cin>>lCombustivel;

    // Calculo do consumo de combustível em Km / L
    consumoCombustivel = kmTotal / lCombustivel;

    // Requisição do total de dinheiro recebido no dia
    cout<<"Digite o total de dinheiro recebido : ";
    cin>>dinheiroTotal;

    // Cálculo do lucro (total - consumo de combustível)
    gastoCombustivel = dinheiroTotal - (lCombustivel * valorGasolina);

    // Exibição do consumo em KM/L e de lucro diário
    cout<<"Media de consumo Km/L : "<<consumoCombustivel<<endl<<"Lucro diario : "<<gastoCombustivel;

    return 0;
}