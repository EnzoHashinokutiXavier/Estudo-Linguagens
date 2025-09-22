#include<iostream>

using namespace std;

int conversao(float km){
    float milhas;

    milhas = km * 0.62;

    cout<<"Em milhas : "<<milhas;
}

int main(){
    float distancia, milharal;

    cout<<"Informe um valor em kilometros : ";
    cin>>distancia;

    conversao(distancia);

    return 0;
}