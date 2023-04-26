/* 9-Crie um programa que leia um numero inteiro e imprimar a tabuada desse numero*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e saída de dados

int main() { // Função principal do programa
    int num, i; // Declaração das variáveis num e i como int

    printf("Digite um numero inteiro: "); // Imprime uma mensagem para o usuário
    scanf("%d", &num); // Lê o número digitado pelo usuário e armazena na variável num

    for (i = 1; i <= 10; i++) { // Loop para imprimir a tabuada do número de 1 a 10
        printf("%d x %d = %d\n", num, i, num * i); // Imprime a tabuada do número
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
