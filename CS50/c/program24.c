#include <stdio.h>

void main(){
    int n = 50;

    int *p = &n;  // ponteiro p recebe a localização de n

    // localização de n
    printf("%p\n", p);
    // ou
    printf("%p\n", &n);

    // valor de n
    printf("%d\n", *p);

    char *palavra = "Ola";
    //primeiro valor de uma string é a mesma localização dela
    printf("localizacao %p\n", palavra);
    printf("loc 0 %p\n", &palavra[0]);
    printf("loc 1 %p\n", &palavra[1]);
    printf("loc 2 %p\n", &palavra[2]);
    printf("loc 3 %p\n", &palavra[3]);


}