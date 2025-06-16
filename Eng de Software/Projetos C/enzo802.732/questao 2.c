#include <stdio.h>

void main()
{
    float raio, altura, volume;

    printf("Digite a altura da lata :");
    scanf("%f", &altura);

    printf("Agora digite seu raio :");
    scanf("%f", &raio);

    volume = 3.14159*raio*raio*altura;

    printf("A lata tem volume %f", volume);
}
