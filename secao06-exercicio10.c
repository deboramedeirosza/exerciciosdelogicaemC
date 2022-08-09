/* Elabore um algoritmo que dada a idade de um nadador classifique-o em uma das seguintes categorias:
infantil-a = 5 a 7 anos
infantil-b = 8 a 11 anos
juvenil-a = 12 a 13 anos
juvenil-b = 14 a 17 anos
adultos = maiores de 18 anos
*/

#include <stdio.h>

int main(){
	//variáveis
	int idade;

	//entrada
	printf("Informe a idade: ");
	scanf("%d", &idade);

	//processamento
	if(idade >=5 && idade <= 7){
		printf("Infantil A");
	}else if(idade >= 8 && idade <= 11){
		printf("Infantil B");
	}else if(idade >= 12 && idade <= 13){
		printf("Juvenil A");
	}else if(idade >= 13 && idade <= 17){
		printf("Juvenil B");
	}else if(idade > 18){
		printf("Adulto");
	}
}
