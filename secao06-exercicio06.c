/*Elabore um algoritmo que leia as variáveis 'c' e 'n', respectivamente código e número de horas trabalhadas de um operário. Calcule o salário sabendo-se
que ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50, calcule o excesso de pagamento armazenando-o na variável 'e'. Caso contrário zerar
tal variável. A hora excedente de trabalho vale R$ 20,00. No final do processamento imprimir o salário total e salário excedente.
*/
#include <stdio.h>

int main (){
	//Variáveis
	int c;
	float n, e = 0, salario, valor_hora = 10;

	//Entradas
	printf("Digite o código do trabalhador: ");
	scanf("%d", &c);
	gets(stdin);
	printf("Digite as horas trabalhadas: ");
	scanf("%f", &n);

	//Processamentos
	if(n > 50){
		e = (n - 50) * 20.00;
		salario = (50 * valor_hora) + e;
		//Saídas
		printf("Salário Total é de R$ %.2f\n", salario);
		printf("Salário Excedente é de R$ %.2f", e);
	}else{
		salario = n * valor_hora;
		printf("Salário Total é de R$ %.2f\n", salario);
		printf("Salário Excedente é de R$ %.2f.", e);
		}
}
