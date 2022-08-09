/* Faça um programa que receba um código numérico inteiro e um vetor de cinco posições de números reais. Se o código for zero, termine o programa.
Se o código for 1, mostre o vetor na ordem direta. Se o código for 2, mostre o vetor na ordem inversa.
*/

#include <stdio.h>

int main(){
	//variáveis
	float vetor[5];
	int codigo;
	//entradas
	printf("Informe o código: ");
	scanf("%d", &codigo);
	if(codigo != 0){
		for(int i = 0; i < 5; i++){
			//entradas
			printf("Informe um número real: ");
			scanf("%f", &vetor[i]);
		}
		//processamento
		if(codigo == 1){
			for(int i = 0; i < 5; i++){
				printf("%.2f\n", vetor[i]);
			}
		}
		if(codigo == 2){
			for(int i = 4; i >= 0; i--){
				printf("%.2f\n", vetor[i]);
			}
		}
	}
}
