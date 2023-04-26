/*10-escreva um programa que leia o nome e a idade de um pessoa 
e imprima uma mensagem de saudaçao*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e saída de dados

int main() { // Função principal do programa
    char nome[50]; // Declaração da variável nome como um array de caracteres com tamanho 50
    int idade; // Declaração da variável idade como int

    printf("Digite o seu nome: "); // Imprime uma mensagem para o usuário
    fgets(nome,50,stdin); // Lê o nome digitado pelo usuário e armazena na variável nome

    printf("Digite a sua idade: "); // Imprime uma mensagem para o usuário
    scanf("%d", &idade); // Lê a idade digitada pelo usuário e armazena na variável idade

    printf("Ola, %s! Você tem %d anos de idade.\n", nome, idade); // Imprime a mensagem de saudação

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
