#include <stdio.h>

int main(){
    char palavra[20];   //ex : [5] = armazenamento de 0 a 5, o espaço 5 é 0 q prepresenta fim da array
    printf("Digite seu nome :");
    scanf("%19s", palavra);
    printf("Primeira letra %c\n", palavra[0]);
    printf("numero que prepresenta em decimal a primeira letra %i\n", palavra[0]);
    printf("decimal do final da array, nesse caso o espaco 20 = %i", palavra[20]);  // o ultimo espaco da array é sempre 0
}