/*3-Crie um programa que leia um numero inteiro e imprima se ele e par ou impar*/

#include<stdio.h> //Inclui a biblioteca stdio.h para permitir entrada e sa�da de dados


int main(){ // Fun��o principal do programa
	
	int num; // Declara��o da vari�vel num como int
	
	printf("Digite um numero inteiro ");// Imprime uma mensagem para o usu�rio
	scanf("%d",&num); // L� o n�mero digitado pelo usu�rio e armazena na vari�vel num
	
	if(num%2==0){ // Verifica se o n�mero � divis�vel por 2, ou seja, se � par
	
		printf("%d e um numero par\n",num); // Imprime uma mensagem indicando que o n�mero � par	
		
	}else{// Se o n�mero n�o � divis�vel por 2, ou seja, se � �mpar
	
		printf("%d e um numero impar",num); // Imprime uma mensagem indicando que o n�mero � �mpar
	}
	return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
	
}
