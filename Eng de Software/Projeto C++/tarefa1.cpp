#include<iostream>

using namespace std;

void converter(int km){
    float milhas;

    milhas = km * 0.62;

    cout<<km<<" em milhas eh "<<milhas;
}

int main(){
    int x;

    cout<<"Informe um valor em kilometros : ";
    cin>>x;

    converter(x);

    return 0;
}