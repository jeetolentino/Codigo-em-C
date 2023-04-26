/*1-faça um programa que leia dois numeros inteiros e imprimaa soma.*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e saída de dados

int main() { // Função principal do programa
    int num1, num2, soma; // Declaração das variáveis inteiras

    printf("Digite o primeiro numero inteiro: "); // Imprime uma mensagem para o usuário
    scanf("%d", &num1); // Lê o primeiro número digitado pelo usuário e armazena na variável num1

    printf("Digite o segundo numero inteiro: "); // Imprime uma mensagem para o usuário
    scanf("%d", &num2); // Lê o segundo número digitado pelo usuário e armazena na variável num2

    soma = num1 + num2; // Realiza a soma dos números e armazena na variável soma

    printf("A soma de %d e %d é igual a %d\n", num1, num2, soma); // Imprime o resultado da soma na tela

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
