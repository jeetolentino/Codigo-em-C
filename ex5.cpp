/*5-Faça um programa que leia um numero inteiro e imprima o sei antecessor e sucessor*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e saída de dados

int main() { // Função principal do programa
    int num; // Declaração da variável inteira num

    printf("Digite um numero inteiro: "); // Imprime uma mensagem para o usuário
    scanf("%d", &num); // Lê o número digitado pelo usuário e armazena na variável num

    int antecessor = num - 1; // Calcula o antecessor do número e armazena na variável antecessor
    int sucessor = num + 1; // Calcula o sucessor do número e armazena na variável sucessor

    printf("O antecessor de %d é %d\n", num, antecessor); // Imprime o antecessor do número
    printf("O sucessor de %d é %d\n", num, sucessor); // Imprime o sucessor do número

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}




