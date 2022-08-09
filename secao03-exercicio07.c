//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7 * altura) - 58

#include <stdio.h>

int main(){
	//Declaração das Variárveis
	float altura, peso_ideal;

	//Entrada
	printf("Informe a altura: ");
	scanf("%f", &altura);

	//Processamento
	peso_ideal = (72.7 * altura) - 58;

	//Saída
	printf("O peso ideal é de %.2f", peso_ideal);
	}
