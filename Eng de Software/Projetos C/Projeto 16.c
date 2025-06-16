#include <stdio.h>

int main(){
    float jose, pedro;
    int anos;
    jose = 1.50;
    pedro = 1.10;
    anos = 0;
    while(pedro <= jose)
    {
        anos ++;
        jose += 0.02;
        pedro += 0.03;
    }
    printf("precisa de %d anos para pedro ser maior que jose", anos);
    return 0;
}
