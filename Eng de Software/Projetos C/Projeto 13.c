#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;


    printf("\nDigite o valor de n1 : ");
    scanf("%d", &n1);
    printf("\nDigite o valor de n2 : ");
    scanf("%d", &n2);
    printf("\nDigite o valor de n3 : ");
    scanf("%d", &n3);
    printf("\nDigite o valor de n4 : ");
    scanf("%d", &n4);
    printf("\nDigite o valor de n5 : ");
    scanf("%d", &n5);
    printf("\nDigite o valor de n6 : ");
    scanf("%d", &n6);
    printf("\nDigite o valor de n7 : ");
    scanf("%d", &n7);
    printf("\nDigite o valor de n8 : ");
    scanf("%d", &n8);
    printf("\nDigite o valor de n9 : ");
    scanf("%d", &n9);
    printf("\nDigite o valor de n10 : ");
    scanf("%d", &n10);

    printf("\nOs numeros digitados que sao multiplos de 3 sao :\n");
    if (n1 % 3 == 0)
        if (n1 != 0)
            printf("%d, ",n1);
    if (n2 % 3 == 0)
        if (n2 != 0)
            printf("%d, ",n2);
    if (n3 % 3 == 0)
        if (n3 != 0)
            printf("%d, ",n3);
    if (n4 % 3 == 0)
        if (n4 != 0)
            printf("%d, ",n4);
    if (n5 % 3 == 0)
        if (n5 != 0)
            printf("%d, ",n5);
    if (n6 % 3 == 0)
        if (n6 != 0)
            printf("%d, ",n6);
    if (n7 % 3 == 0)
        if (n7 != 0)
            printf("%d, ",n7);
    if (n8 % 3 == 0)
        if (n8 != 0)
            printf("%d, ",n8);
    if (n9 % 3 == 0)
        if (n9 != 0)
            printf("%d, ",n9);
    if (n10 % 3 == 0)
        if (n10 != 0)
            printf("%d, ",n10);
    printf("Fim");

}
