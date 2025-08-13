#include <iostream>

using namespace std;

int main(){
    int h, m, s, t;

    cout<<"Quantia de horas : ";
    cin>>h;
    cout<<"Quantia de minutos : ";
    cin>>m;
    cout<<"Quantia de segundos : ";
    cin>>s;

    t = s + h * 3600 + m * 60;

    cout<<"Total em segundos : "<<t<<endl;
}