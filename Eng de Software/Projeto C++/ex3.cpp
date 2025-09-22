#include <iostream>
#include <cstdio> 
#include <cstring>

using namespace std;

int main(){
    char frase[100];
    char palavra[100];
    char palavraInvertida[100] = "";
    char fraseInversa[100] = "";
    int i, tamanhoFrase, tamanhoPalavra, c, ct;

    cout<<"Digite uma frase : ";
    gets(frase);

    tamanhoFrase = strlen(frase);

    c = 0;
    // olha frase toda do fim ao começo
    for(i = tamanhoFrase - 1; i >= 0; i-- ){
        palavra[c] = frase[i];
        c += 1;

        // se espaço vazio, fim de palavra
        if(frase[i] == ' ' || i == 0){
            // inverte palavra (que foi registrada de tras pra frente)
            tamanhoPalavra = strlen(palavra);
            palavraInvertida[0] = ' '; // Adiciona um espaço entre as palavras
            for(ct = 0; ct < tamanhoPalavra; ct++){
                palavraInvertida[(ct + 1)] = palavra[(tamanhoPalavra-ct-1)];
            }
            strcat(fraseInversa, palavraInvertida); // Junta palavra a frase
            memset(palavra, '\0', sizeof(palavra)); // Define todos os elementos como '\0'
            memset(palavraInvertida, '\0', sizeof(palavraInvertida));
            c = 0;
        }
    }
    cout<<fraseInversa;
}