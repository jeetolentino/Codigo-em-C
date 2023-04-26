/*2-Escreva um programa que calcule e imprima a area de um circulo de raio r*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e sa�da de dados
#define PI 3.14 // Define o valor de PI como uma constante

int main() { // Fun��o principal do programa
    float raio, area; // Declara��o das vari�veis do tipo float

    printf("Digite o raio do circulo: "); // Imprime uma mensagem para o usu�rio
    scanf("%f", &raio); // L� o raio digitado pelo usu�rio e armazena na vari�vel raio

    area = PI * (raio * raio); // Calcula a �rea do c�rculo usando a f�rmula A = PI * r^2 e armazena na vari�vel area

    printf("A area do c�rculo �: %.2f\n", area); // Imprime o resultado da �rea na tela

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
