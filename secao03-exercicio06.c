//Faça um algoritmo que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
//Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>

int main (){
	//Declaração de Variáveis
	float valor_hora, salario;
	int qtd_horas;

	//Entradas
	printf("Informe quantas horas foram trabalhadas no mês: ");
	scanf("%d", &qtd_horas);

	printf("Informe o valor da hora: ");
	scanf("%f", &valor_hora);

	//Processamento
	salario = (qtd_horas * valor_hora);

	//Saída
	printf("O valor do salário desse mês é de %.2f", salario);
}
