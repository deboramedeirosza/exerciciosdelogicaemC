//Faça um algotimo que peça dois números e imprima a soma.

#include <stdio.h>

int main (){
	//Declaração de Variáveis
	int num1, num2, soma;

	//Entradas
	printf("Informe o primeiro número: ");
	scanf("%d", &num1);
	printf("Informe o segundo número: ");
	scanf("%d", &num2);

	//Processamento
	soma = (num1 + num2);

	//Saída
	printf("O resultado da soma é %d", soma);
}
