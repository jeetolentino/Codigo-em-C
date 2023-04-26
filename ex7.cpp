/*7-Escreva um rgrama que leia a idade de uma pessoa e imprimase ela e maior ou menor de idade*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e saída de dados

int main() { // Função principal do programa
    int idade; // Declaração da variável idade como inteiro

    printf("Digite a idade: "); // Imprime uma mensagem para o usuário
    scanf("%d", &idade); // Lê a idade digitada pelo usuário e armazena na variável idade

    if (idade >= 18) { // Verifica se a idade é maior ou igual a 18 anos
        printf("Maior de idade\n"); // Imprime uma mensagem informando que a pessoa é maior de idade
    } else { // Caso contrário
        printf("Menor de idade\n"); // Imprime uma mensagem informando que a pessoa é menor de idade
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
