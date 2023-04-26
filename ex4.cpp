/*4-Escreva um programa que calcule a media aritmetica de tres numeros*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e sa�da de dados

int main() { // Fun��o principal do programa
    float num1, num2, num3, media; // Declara��o das vari�veis do tipo float

    printf("Digite tres numeros: "); // Imprime uma mensagem para o usu�rio
    scanf("%f %f %f", &num1, &num2, &num3); // L� os tr�s n�meros digitados pelo usu�rio e armazena nas vari�veis num1, num2 e num3

    media = (num1 + num2 + num3) / 3; // Calcula a m�dia aritm�tica dos tr�s n�meros e armazena na vari�vel media

    printf("A media aritmetica e: %.2f\n", media); // Imprime o resultado da m�dia aritm�tica na tela, com duas casas decimais ap�s a v�rgula

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
