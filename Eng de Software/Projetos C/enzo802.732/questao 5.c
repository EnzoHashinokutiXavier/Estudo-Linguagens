#include <stdio.h>

void main()
{
    float salario, vendas, salario_final;

    printf("Digite o valor do salario do funcionario:");
    scanf("%f", &salario);

    printf("Digite o valor total de vendas do funcionario :");
    scanf("%f", &vendas);

    salario_final = salario + (vendas * 0.05);

    printf("O salario final do funcionario deu %f", salario_final);
}
