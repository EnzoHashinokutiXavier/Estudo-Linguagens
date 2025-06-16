#include <stdio.h>

void main()
{
    float salario, salario_reajuste1, salario_reajuste2,salario_reajuste3;

    printf("Digite o valor do salario do funcionario :");
    scanf("%f", &salario);

    salario_reajuste1 = salario * 1.07;
    salario_reajuste2 = salario_reajuste1 * 1.06;
    salario_reajuste3 = salario_reajuste2 * 1.05;

    printf("O salario de %f no reajuste dos proximos tres anos sera :\n %f \n %f \n %f ", salario, salario_reajuste1, salario_reajuste2, salario_reajuste3);
}
