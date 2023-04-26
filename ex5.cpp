/*5-Fa�a um programa que leia um numero inteiro e imprima o sei antecessor e sucessor*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e sa�da de dados

int main() { // Fun��o principal do programa
    int num; // Declara��o da vari�vel inteira num

    printf("Digite um numero inteiro: "); // Imprime uma mensagem para o usu�rio
    scanf("%d", &num); // L� o n�mero digitado pelo usu�rio e armazena na vari�vel num

    int antecessor = num - 1; // Calcula o antecessor do n�mero e armazena na vari�vel antecessor
    int sucessor = num + 1; // Calcula o sucessor do n�mero e armazena na vari�vel sucessor

    printf("O antecessor de %d � %d\n", num, antecessor); // Imprime o antecessor do n�mero
    printf("O sucessor de %d � %d\n", num, sucessor); // Imprime o sucessor do n�mero

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}




