/* Faça um algoritmo que determine o maior entre N números. A condição de parada é a entrada de um valor 0, ou seja, o algoritmo deve ficar calculando até
que a entrada seja igual a 0 (zero).
*/

#include <stdio.h>

int main (){
	//variáveis
	int n, maior = 0;

	//entrada1
	printf("Informe um número: ");
	scanf("%d", &n);

	//Processamento
	while(n != 0){
		if(n > maior){
			maior = n;
	}
		//entrada2
		printf("Informe um número: ");
			scanf("%d", &n);
	}
	//saída
	printf("O maior número é o %d", maior);
}
