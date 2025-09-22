#include <stdio.h>

void ola(char *nome); // Avisa que vai ter uma função chamada ola que recebe um ponteiro para char

// Main function to read a name and call the greeting function
int main()
{
    char nome[20];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    for (int i = 0; i < 3; i++) //i inicia em 0, vai até 2, incrementa de 1 em 1 : repete 3 vezes
    {
        ola(nome);
    }
    return 0;
}

// Function to print a greeting message
void ola(char *nome)
{
    printf("Ola %s\n", nome);
}


