#include <stdio.h>

void main()
{

    int idade;
    float valor;

    printf("Digite sua idade :");
    scanf("%d", &idade);

    if (idade <= 10)
        valor = 30.00;
    else
        if (idade <= 29)
            valor = 60.00;
        else
            if (idade <= 45)
                valor = 120.00;
            else
                if (idade <= 59)
                    valor = 150.00;
                else
                    valor = 250.00;
    printf("O valor do seu plano de saude eh : R$%.2f", valor);
}
