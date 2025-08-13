#include <iostream>

using namespace std;

int main(){
    // Declaração das variáveis e inicio de contadores como 0
    int idade, contadorIdade = 0, contadorPeso = 0;
    float peso;

    // loop de 10 repetições
    for(int i = 0; i<10; i++){
        // Requisição da idade 
        cout<<"Digite a idade da pessoa "<<i+1<<" : ";
        cin>> idade;

        // Se idade maior que 50, contador aumenta em um
        if(idade > 50){
            contadorIdade++;
        }

        // Requisição de peso
        cout<<"Digite o peso da pessoa "<<i+1<<" em kg : ";
        cin>>peso;

        // Se peso maior doque 90 kg, contador aumenta em um
        if(peso > 90){
            contadorPeso++;
        }

    }

    // Exibição dos contadores
    cout<<"Quantia de pessoas com mais de 90 kg : "<<contadorPeso<<endl;
    cout<<"Quantia de pessoas com mais de 50 anos : "<<contadorIdade<<endl;

    return 0;
}