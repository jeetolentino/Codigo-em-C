/* 9-Crie um programa que leia um numero inteiro e imprimar a tabuada desse numero*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e sa�da de dados

int main() { // Fun��o principal do programa
    int num, i; // Declara��o das vari�veis num e i como int

    printf("Digite um numero inteiro: "); // Imprime uma mensagem para o usu�rio
    scanf("%d", &num); // L� o n�mero digitado pelo usu�rio e armazena na vari�vel num

    for (i = 1; i <= 10; i++) { // Loop para imprimir a tabuada do n�mero de 1 a 10
        printf("%d x %d = %d\n", num, i, num * i); // Imprime a tabuada do n�mero
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
