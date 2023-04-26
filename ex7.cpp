/*7-Escreva um rgrama que leia a idade de uma pessoa e imprimase ela e maior ou menor de idade*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e sa�da de dados

int main() { // Fun��o principal do programa
    int idade; // Declara��o da vari�vel idade como inteiro

    printf("Digite a idade: "); // Imprime uma mensagem para o usu�rio
    scanf("%d", &idade); // L� a idade digitada pelo usu�rio e armazena na vari�vel idade

    if (idade >= 18) { // Verifica se a idade � maior ou igual a 18 anos
        printf("Maior de idade\n"); // Imprime uma mensagem informando que a pessoa � maior de idade
    } else { // Caso contr�rio
        printf("Menor de idade\n"); // Imprime uma mensagem informando que a pessoa � menor de idade
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
