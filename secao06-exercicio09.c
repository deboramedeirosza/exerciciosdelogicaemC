/* A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3 grupos de indústrias que são altamente poluentes do meio ambiente. O índice de 
polucição aceitável varia de 0,05 até 0,25. Se o índice sobe para 0,3 as indústrias do 1º grupo são intimadas para suspenderem as atividades; se índice 
crescer para 0,4 as indústrias do 1º e 2º grupo são intimadas para suspenderem as atividades; se o índice atingir 0,5 todos os grupos devem ser notificados
e paralisam as atividades.
Faça um algoritmo que leia o índice de poluição medido e emita a notificação adequada aos diferentes grupos de empresas.
*/

#include <stdio.h>

int main(){
	//variáveis
	float indice;

	//entrada
	printf("Informe índice de poluição: ");
	scanf("%f", &indice);

	//processamento
	if(indice >= 0.3 && indice < 0.4){
		printf("Atenção! Indústrias do grupo 1 devem suspender as atividades.");
	}else if(indice >= 0.4 && indice < 0.5){
		printf("Atenção! Indústrias do grupo 1 e 2 devem suspender as atividades.");
	}else if(indice >= 0.5){
		printf("Atenção! Todos os grupos industriais devem suspendder as atividades");
	}
}
