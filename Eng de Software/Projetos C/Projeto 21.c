#include <stdio.h>

void linha(int numero);

int main(){
    int i;
    const int linhas = 6;
    for (i = 1; i < (linhas + 1); i++){
        linha(i);
        printf("\n");
    }
}

void linha (int numero){
    int x;
    x = 0;
    while (numero > x){
        x = x + 1;
        printf("%i ", x);
    }
}
