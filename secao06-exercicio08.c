// Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo. 
#include <stdio.h>

int main(){
	//Variáveis
	int numero;

	//Entrada
	printf("Informe um número inteiro: ");
	scanf("%d", &numero);

	//Processamento
	if(numero % 2 == 0){
		if(numero > 0){
			printf("O número %d é par e positivo", numero);
		}else{
			printf("O número %d é par e negativo", numero);
			}
	}else{
		if(numero > 0){
			printf("O número é impar e positivo", numero);
		}else{
			printf("O número é impar e negativo", numero);
		}

	}
}
