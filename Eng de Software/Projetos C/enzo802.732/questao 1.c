#include <stdio.h>

void main()
{
    int anos, dias;

    printf("Digite sua idade em anos :");
    scanf("%d", &anos);

    dias = anos * 12 * 30;

    printf("Sua idade equivale a %d dias", dias);

}
