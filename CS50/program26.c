#include <stdio.h>

void main(){
    int* pk;
    int b = 35; 

    pk = &b;  // pk recebe localização de b
    b--;
    printf("%d", *pk);  // 34

    int m = 60;
    pk = &m; // pk passa a apontar para m
    printf("\n%d", *pk);
}