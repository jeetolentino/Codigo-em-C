/*3-Crie um programa que leia um numero inteiro e imprima se ele e par ou impar*/

#include<stdio.h> //Inclui a biblioteca stdio.h para permitir entrada e saída de dados


int main(){ // Função principal do programa
	
	int num; // Declaração da variável num como int
	
	printf("Digite um numero inteiro ");// Imprime uma mensagem para o usuário
	scanf("%d",&num); // Lê o número digitado pelo usuário e armazena na variável num
	
	if(num%2==0){ // Verifica se o número é divisível por 2, ou seja, se é par
	
		printf("%d e um numero par\n",num); // Imprime uma mensagem indicando que o número é par	
		
	}else{// Se o número não é divisível por 2, ou seja, se é ímpar
	
		printf("%d e um numero impar",num); // Imprime uma mensagem indicando que o número é ímpar
	}
	return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
	
}
