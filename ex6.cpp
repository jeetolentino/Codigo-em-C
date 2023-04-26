/*6-Crie um programa que leia um numero real e imprima a sua parte inteira*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e saída de dados

int main() { // Função principal do programa
    float num; // Declaração da variável real num

    printf("Digite um numero real: "); // Imprime uma mensagem para o usuário
    scanf("%f", &num); // Lê o número digitado pelo usuário e armazena na variável num

    int parte_inteira = (int)num; // Converte o número real para inteiro e armazena na variável parte_inteira

    printf("A parte inteira de %f e %d\n", num, parte_inteira); // Imprime a parte inteira do número

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
