#include<stdio.h>
#include<stdlib.h>

void main(){
    // Obter um inteiro estaticamente
    int x;
    // Obter dinamicamente um inteiro
    int *px = malloc(sizeof(int));  // cria ponteiro px que aponta para um espaço inteiro

    // array of floats on the stack (pilha)
    float stack_array[x];
    // array of floats on the heap
    float* heap_array = malloc(x * sizeof(float));
}