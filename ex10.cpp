/*10-escreva um programa que leia o nome e a idade de um pessoa 
e imprima uma mensagem de sauda�ao*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e sa�da de dados

int main() { // Fun��o principal do programa
    char nome[50]; // Declara��o da vari�vel nome como um array de caracteres com tamanho 50
    int idade; // Declara��o da vari�vel idade como int

    printf("Digite o seu nome: "); // Imprime uma mensagem para o usu�rio
    fgets(nome,50,stdin); // L� o nome digitado pelo usu�rio e armazena na vari�vel nome

    printf("Digite a sua idade: "); // Imprime uma mensagem para o usu�rio
    scanf("%d", &idade); // L� a idade digitada pelo usu�rio e armazena na vari�vel idade

    printf("Ola, %s! Voc� tem %d anos de idade.\n", nome, idade); // Imprime a mensagem de sauda��o

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
