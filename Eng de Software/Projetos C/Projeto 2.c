#include <stdio.h>
#include <math.h>

void main()
{
    int A, B, C;
    float D, R, S;

    printf("Digite o valor de A:");
    scanf("%d", &A);

    printf("Digite o valor de B:");
    scanf("%d", &B);

    printf("Digite o valor de C:");
    scanf("%d", &C);

    D = (pow((A+B), 2) + pow((B+C), 2))/2;

    printf("Resultado : %g", D);
}
