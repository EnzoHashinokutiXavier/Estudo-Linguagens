#include<iostream>

using namespace std;

struct pessoa{
    float salario;
    int idade;
    char sexo;
    int filhos;
};

int main(){
    int i, ch = 0, cm = 0, cf = 0, salario_homens = 0, salario_mulheres = 0, total_filhos = 0;
    float mediaMulheres, mediaHomens, mediaFilhos;
    pessoa lista[10];

    for (i = 0; i < 10; i++){
        cout<<"Informe o salario : ";
        cin >> lista[i].salario;
        cout<<"Informe a idade : ";
        cin >> lista[i].idade;
        cout<<"Informe o sexo m/f : ";
        cin >> lista[i].sexo;
        cout<<"Informe o numero de filhos: ";
        cin >> lista[i].filhos;

        if (lista[i].sexo == 'f'){
            salario_mulheres += lista[i].salario;
            cm++;
        }

        if (lista[i].sexo == 'm'){
            salario_homens += lista[i].salario;
            ch++;
        }

        total_filhos += lista[i].filhos;
    }
    mediaMulheres = salario_mulheres / cm;
    mediaHomens = salario_homens / ch;
    mediaFilhos = total_filhos / 10;

    cout<<"Media de salario das mulheres : "<<mediaMulheres<<endl;
    cout<<"Media de salario dos homens : "<<mediaHomens<<endl;
    cout<<"Media de filhos : "<<mediaFilhos<<endl;

}