#include <stdio.h>

void main(){

    int n, x, i;

    printf("Digite um numero :");
    scanf("%d", &n);

    x = 1;

    for (i = n; i > 0; i--){
        x = x * i;
    }

    printf("%d", x);
}