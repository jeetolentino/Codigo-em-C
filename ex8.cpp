/* 8-Faça uma programa que leia um temperatura e, graus celsius e a converta pra fahreinheit*/
#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e saída de dados

int main() { // Função principal do programa
    float celsius, fahrenheit; // Declaração das variáveis celsius e fahrenheit como float

    printf("Digite a temperatura em Celsius: "); // Imprime uma mensagem para o usuário
    scanf("%f", &celsius); // Lê a temperatura em Celsius digitada pelo usuário e armazena na variável celsius

    fahrenheit = (celsius * 1.8) + 32; // Faz a conversão de Celsius para Fahrenheit

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit); // Imprime o resultado da conversão

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
