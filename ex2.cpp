/*2-Escreva um programa que calcule e imprima a area de um circulo de raio r*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e saída de dados
#define PI 3.14 // Define o valor de PI como uma constante

int main() { // Função principal do programa
    float raio, area; // Declaração das variáveis do tipo float

    printf("Digite o raio do circulo: "); // Imprime uma mensagem para o usuário
    scanf("%f", &raio); // Lê o raio digitado pelo usuário e armazena na variável raio

    area = PI * (raio * raio); // Calcula a área do círculo usando a fórmula A = PI * r^2 e armazena na variável area

    printf("A area do círculo é: %.2f\n", area); // Imprime o resultado da área na tela

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
