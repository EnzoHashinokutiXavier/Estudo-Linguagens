#include <stdio.h>

void main(){
    int x, i, c;

    printf("Digite um número positivo maior que dois : ");
    scanf("%d", &x);

    c = 0;  // condiçao zerada

    for (i = 2; i < x; i ++){
        if (x % i == 0){  // se tiver numero divisivel
            c = 1;
        }
    }
    
    if (c == 0){
        printf("Eh primo");
    }
    else{
        printf("Nao eh primo");
    }
}