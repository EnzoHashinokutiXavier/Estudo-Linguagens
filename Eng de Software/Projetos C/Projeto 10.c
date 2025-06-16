#include <stdio.h>

void main(){
    float valor, total;
    int codigo, quantia;

    printf("Digite o codigo do produto :\n");
    scanf("%d", &codigo);
    printf("Digite a quantia :\n");
    scanf("%d", &quantia);
    switch(codigo) {
        case 100:
            valor = quantia * 22.5;
        break;
        case 101:
            valor = quantia * 20.5;
        break;
        case 102:
            valor = quantia * 34;
        break;
        case 103:
            valor = quantia * 40;
        break;
        case 104:
            valor = quantia * 7.5;
        break;
        default:
            printf("codigo invalido");
        return 1;
    }
    printf("O total a ser cobrado sera : %.2f", valor);
}
