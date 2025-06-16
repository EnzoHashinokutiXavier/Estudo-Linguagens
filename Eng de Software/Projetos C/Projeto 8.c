#include <stdio.h>

void main()
{
    float n1, n2, n3, n4, media;

    printf("Digite as notas das 4 provas :\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4)/4;
    if (media >= 6)
        printf("O aluno esta aprovado");
    else
        if (media >= 3)
            printf("O aluno esta de exame");
        else
            printf("O aluno foi reprovado");
}
