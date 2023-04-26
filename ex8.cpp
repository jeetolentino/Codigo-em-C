/* 8-Fa�a uma programa que leia um temperatura e, graus celsius e a converta pra fahreinheit*/
#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e sa�da de dados

int main() { // Fun��o principal do programa
    float celsius, fahrenheit; // Declara��o das vari�veis celsius e fahrenheit como float

    printf("Digite a temperatura em Celsius: "); // Imprime uma mensagem para o usu�rio
    scanf("%f", &celsius); // L� a temperatura em Celsius digitada pelo usu�rio e armazena na vari�vel celsius

    fahrenheit = (celsius * 1.8) + 32; // Faz a convers�o de Celsius para Fahrenheit

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit); // Imprime o resultado da convers�o

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
