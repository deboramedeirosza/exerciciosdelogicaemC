//Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
//Para homens: (72.7 * altura) - 58
//Para mulheres: (62.1 * altura) - 44.7

#include <stdio.h>
#include <ctype.h> //Incluída essa biblioteca para poder inserir o comando 'tolower' no sexo.
	// Dessa forma, se o usuário inserir M ou F maiúsculo, o programa vai transformar em minúsculo antes de processar.
	//Com isso o programa reconhece M ou F e não manda o processamento direto pra "sexo não reconhecido".

int main(){
	//Variáveis
	float altura, peso_ideal;
	char sexo; //char vem de caracteres, no caso m ou f.

	//Entradas
	printf("Informe a altura: ");
	scanf("%f", &altura);
	gets(stdin);
	printf("Informe o sexo [m/f]: ");
	scanf("%c", &sexo);

	//Processamento
	if(tolower(sexo) == 'm'){
		peso_ideal = (72.7 * altura) - 58;
		printf("Peso ideal é de %.2f", peso_ideal);
	}
	if (tolower(sexo) == 'f'){
		peso_ideal = (62.1 * altura) - 44.7;
		printf("Peso ideal é de %.2f", peso_ideal);
	}
	if (tolower(sexo) != 'm' && tolower(sexo) != 'f'){
		printf("Sexo não reconhecido. \n");
	}
}
