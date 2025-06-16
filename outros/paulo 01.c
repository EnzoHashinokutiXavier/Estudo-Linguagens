#include <stdio.h>

void main()
{
    int idade;
    printf("Digite a idade do nadador para saber sua categoria :\n");
    scanf("%d", &idade);
    if (idade <= 4)
        printf("Idade nao permitida");
    else
        if(idade <= 7)
        printf("Infantil A");
        else
            if (idade <= 10)
                printf ("Infantil B");
            else
                if (idade <= 13)
                printf("Juvenil A");
                else
                    if (idade <= 17)
                    printf("Juvenil B");
                    else
                        if (idade > 17)
                        printf("Adulto");



}
