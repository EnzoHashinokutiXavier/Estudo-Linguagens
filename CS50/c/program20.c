#include <stdio.h>

void main(){
    char lista[] = {'a', 'b', 'c', 'd', 'e'};
    printf("%c\n", lista[0]);  // %c mostra a letra, %d mostra o numero da letra
    printf("%c\n", lista[1]);
    printf("%c\n", lista[2]);
    printf("%c\n", lista[3]);
    printf("%c\n", lista[4]);
    printf("%c%c%c%c%c%c", lista[1],lista[0],lista[1],lista[0],lista[2],lista[0]);
}