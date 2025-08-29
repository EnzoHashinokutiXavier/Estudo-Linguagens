#include <iostream>
#include <cstdio> 
#include <cstring>

using namespace std;

int main(){
    char frase[100];
    int a=0, e=0, i=0, o=0, u=0, c=0;

    cout<<"Escreva uma frase de  ate 100 caracteres : ";
    gets(frase);
    strlwr(frase);

    for(c = 0; c < 100; c++){
        if (frase[c] == 'a'){
            a++;
        }
        else if (frase[c] == 'e'){
            e++;
        }
        else if (frase[c] == 'i'){
            i++;
        }
        else if (frase[c] == 'o'){
            o++;
        }
        else if (frase[c] == 'u'){
            u++;
        }
    }

    cout<<"A : "<<a<<"\nE : "<<e<<"\nI : "<<i<<"\nO : "<<o<<"\nU : "<<u;
}