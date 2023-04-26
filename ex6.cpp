/*6-Crie um programa que leia um numero real e imprima a sua parte inteira*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e sa�da de dados

int main() { // Fun��o principal do programa
    float num; // Declara��o da vari�vel real num

    printf("Digite um numero real: "); // Imprime uma mensagem para o usu�rio
    scanf("%f", &num); // L� o n�mero digitado pelo usu�rio e armazena na vari�vel num

    int parte_inteira = (int)num; // Converte o n�mero real para inteiro e armazena na vari�vel parte_inteira

    printf("A parte inteira de %f e %d\n", num, parte_inteira); // Imprime a parte inteira do n�mero

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
