//Ler um número e verificar se ele é par ou impar. Quando for par armazenar esse valor em 'p', e quando for ímpar armazenar em 'i'.
//Exibir 'p' e 'i' no final do processamento.

#include <stdio.h>

int main(){
	//Variáveis
	int numero, p = 0, i = 0;

	//Entradas
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamento
	if(numero % 2 == 0){
		p = numero;
	}else{
		i = numero;
	}
	//Saídas
	printf("%d\n", p);
	printf("%d", i);
}
