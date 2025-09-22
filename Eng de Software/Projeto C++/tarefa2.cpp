#include<iostream>

using namespace std;

void soma(int x, int y){
    int i, soma = 0;
    i = x + 1;
    while (i < y){
        soma += i;
        i++;
    }
    cout<<"A soma dos numeros entre "<<x<<" e "<<y<<" eh igual a "<<soma<<endl;
}

int main(){
    int a, b;

    cout<<"Informe um numero inteiro : ";
    cin>>a;

    cout<<"Informe outro numero inteiro : ";
    cin>>b;

    if (a < b){
        soma(a, b);
    }
    else{
        if (b < a){
            soma(b, a);
        }
        else{
            cout<<"Numeros iguais ou invalidos";
        }
    }

    return 0;
}