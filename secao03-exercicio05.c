//Faça um algoritmo que converta metros para centímetros.

#include <stdio.h>

int main (){
	//Declaração de Variáveis
	int tamanho;

	//Entradas
	printf("Informe tamanho em metros: ");
	scanf("%d", &tamanho);

	//Processamento
	tamanho = tamanho * 100;

	//Saída
	printf("O tamanho em centímetros é de: %d", tamanho);
	}
