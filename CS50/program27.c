#include<stdio.h>

void main(){
    typedef char* string;  // typedef muda um tipo por outro nome
    string palavra[] = {"olaa"};
    printf("%s", palavra[0]);
}