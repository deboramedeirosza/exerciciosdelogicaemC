//Elabore um algoritmo que leia um número. Se positivo armazene-o em 'a', se for negativo, em 'b'. No final mostrar o resultado.

#include <stdio.h>

int main(){

	//Variáveis
	int numero, a, b;

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamento
	if(numero > 0){
		a = numero;
		printf("O número %d é positivo", a);
	}else{
		b = numero;
		printf("O número %d é negativo", b);
	}
}
