#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char str1[15], str2[15];
    int i, n, c;

    cout<<"Escreva uma palavra de ate 15 caracteres :";
    gets(str1);

    strlwr(str1);
    n = strlen(str1);

    for(i = 0; i < n; i++){
        str2[i] = str1[(n - i - 1)];
    }

    c = strcmp(str1, str2);

    if(c == 0)
        cout<<"Eh um palindromo";
    else
        cout<<"Nao eh um palindromo";

    
}