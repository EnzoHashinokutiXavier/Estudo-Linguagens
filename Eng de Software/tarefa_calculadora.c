#include <stdio.h>

void adicao(int n1, int n2);         //Aviso ao programa que haverao essas funssoes e que estarao registradas abaixo da main
void subtracao(int n1, int n2);
void multiplicacao(int n1, int n2);
void divisao(float n1, float n2);
void potenciacao(int n1, int n2);

int main(void){                     // Inicio da main (codigo principal)

    int escolha, numero1, numero2;  // declaro as variaveis que serao usadas para selesao das opsoes e registrar os numeros usados para as operasoes

    do{
    printf("--------Calculadora---------");   // primeira mensagem que aparece na tela, mostrando que se trata de uma calculadora
    printf("\n[0]Sair\n[1]Adisao\n[2]subtrasao\n[3]Multiplicasao\n[4]Divisao\n[5]Potenciasao\nEscolha : ");  // opsoes de operasoes matematicas
    scanf("%d", &escolha);  // registro a escolha do usuario

    if (escolha != 0){    // caso o usuario nao tenha escolhido sair, o programa pede para informar os valores dos numeros
        printf("\nDigite um valor :");
        scanf("%d", &numero1);
        printf("Digite outro valor :");
        scanf("%d", &numero2);
    }

    switch(escolha){  //baseado na escolha do usuario, o programa seguira uma rota
        case 0 :          // caso queira sair
            break;                           // continua o codigo apos o fim do switch
        case 1 :          // caso queira somar
            adicao(numero1, numero2);        // direciona o programa para a funsao de adisao
            break;                          // continua o codigo apos o fim do switch                     
        case 2 :          // caso queira subtrair
            subtracao(numero1, numero2);    // direciona o programa para a funsao de subtrasao
            break;                         // continua o codigo apos o fim do switch                       
        case 3 :          // caso queira multiplicar
            multiplicacao(numero1, numero2);
            break;                         // continua o codigo apos o fim do switch
        case 4 :          // caso queira dividir
            divisao(numero1, numero2);     // direciona o programa para a funsao de divisao
            break;                        // continua o codigo apos o fim do switch
        case 5 :          // caso queira realizar uma potenciasao
            potenciacao(numero1, numero2); // direciona o programa para a funsao de potenciasao
            break;                        // continua o codigo apos o fim do switch
        default :         // caso o usuario tenha digitado algo diferente
            printf("Numero invalido");     // avisa o usuario de ter digitado um numero invalido
            break;                        // continua o codigo apos o fim do switch
    }

    if (escolha != 0){   // caso o usuario nao tenha escolhido sair, acontece apos as operasoes
        printf("\n[0]Sair\n[1]Voltar ao menu inicial\nEscolha :");  // pergunta se quer fechar o programa ou realizar uma nova operasao
        scanf("%d", &escolha);  // escolha eh redefinido para 0 ou 1
    }

    }while(escolha != 0);     // caso escolha seja 0, o loop encerra

    printf("Tchau !");       // mensagem de despedida indicando que o programa encerrou

    return 0;               // verificasao para saber se o programa funcionou como deveria
}


void adicao(int n1, int n2){  // caso o usuario escolha realizar uma soma
    int resultado;                                   // declaro variave para armazenar o resultado da operasao
    resultado = n1 + n2;                            // realiza a soma das variaveis e registra em uma nova variavel
    printf("\n%d + %d = %d\n", n1, n2, resultado); // mostra ao usuario a operasao e o resultado
}


void subtracao(int n1, int n2){  // caso o usuario escolha realizar uma subtrasao
    int resultado;                                   // declaro variave para armazenar o resultado da operasao
    resultado = n1 - n2;                            // realiza a subtrasao das variaveis e registra em uma nova variavel
    printf("\n%d - %d = %d\n", n1, n2, resultado); // mostra ao usuario a operasao e o resultado
}

void multiplicacao(int n1, int n2){  // caso o usuario escolha realizar uma multiplicasao
    int resultado;                                   // declaro variave para armazenar o resultado da operasao
    resultado = n1 * n2;                            // realiza a multiplicasao das variaveis e registra em uma nova variavel
    printf("\n%d x %d = %d\n", n1, n2, resultado); // mostra ao usuario a operasao e o resultado
}


void divisao(float n1, float n2){  // caso o usuario escolha realizar uma divisao
    float resultado;                                       // declaro variave para armazenar o resultado da operasao
    resultado = n1 / n2;                                  // realiza a divisao das variaveis e registra em uma nova variavel
    printf("\n%.0f / %.0f = %.2f\n", n1, n2, resultado); // mostra ao usuario a operasao e o resultado
}


void potenciacao(int n1, int n2){  // caso o usuario escolha realizar uma potenciasao
    float resultado;                            // declaro variavel para armazenar o resultado da operasao
    int i = 1;                                  // declaro variavel para ser usado  de contador para o loop
    resultado = n1;                             // resultado inicia com o valor de n1
    while (i < n2){                               // enquanto contador nao for igual o numero da potenciasao, acontece o loop
        resultado = resultado * n1;              // a cada loop o numero multiplica pelo de valor de n1 representando a potenciasao
        i++;                                    // a cada loop o contador aumenta em 1
    }
    printf("\n%d ^ %d = %.2f\n", n1, n2, resultado); // mostra ao usuario a operasao e o resultado
}