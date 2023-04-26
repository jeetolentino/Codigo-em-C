/*1-fa�a um programa que leia dois numeros inteiros e imprimaa soma.*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e sa�da de dados

int main() { // Fun��o principal do programa
    int num1, num2, soma; // Declara��o das vari�veis inteiras

    printf("Digite o primeiro numero inteiro: "); // Imprime uma mensagem para o usu�rio
    scanf("%d", &num1); // L� o primeiro n�mero digitado pelo usu�rio e armazena na vari�vel num1

    printf("Digite o segundo numero inteiro: "); // Imprime uma mensagem para o usu�rio
    scanf("%d", &num2); // L� o segundo n�mero digitado pelo usu�rio e armazena na vari�vel num2

    soma = num1 + num2; // Realiza a soma dos n�meros e armazena na vari�vel soma

    printf("A soma de %d e %d � igual a %d\n", num1, num2, soma); // Imprime o resultado da soma na tela

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
