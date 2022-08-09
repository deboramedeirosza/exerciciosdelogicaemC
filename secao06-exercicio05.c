/*João da Silva, pescador, comprou un microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que 
o estabelecimento pelo regulamento de pesca do estado de São Paulo (50kg) deve pagar uma multa de R$ 4,00 por quilo excedente.
João precisa que você faça um algoritmo que leia a variável 'p' (peso de peixes), e verifique se há excessos. Se houver, gravar na variárvel 'e' (excesso), 
e na variável 'm' o valor da multa que João deverá pagar. Caso contrário mostrar tais variáveis com conteúdo zero.
*/
#include <stdio.h>

int main(){
//Variáveis
	float peso, multa, excesso;
//Entrada
	printf("Informe quilos de peixe: ");
	scanf("%f", &peso);
//Processamento
	if(peso > 50){
		multa = (peso - 50) * 4;
		printf("Valor da multa por excesso de peso é de R$ %.2f.", multa);

	}else{
		multa = 0;
		excesso = 0;
		printf("Sem excesso de peso, valor da multa é de R$ %.2f.", multa);
	}
}
