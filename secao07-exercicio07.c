/* Sua organização acaba de contratar um estagiário para trabalhar no suporte de informática, com a intenção de fazer levantamento nas sucatas encontradas
nesta área. A primeira tarefa dele é testar todos os cerca de 200 mouses que se encontram lá, testanto e anotando o estado de cada um deles, para verificar
o que se pode aproveitar deles. Foi requisitado que você desenvolva um programa para registrar este levantamento. O programa deverá receber um número inde-
terminado de entradas, cada um contendo: um número de identificação do mouse e o tipo de defeito:
- necessita esfera;
- necessita limpeza;
- necessita troca do cabo ou conector;
- quebrado ou inutilizado.
Uma identificação igual a zero encerra o programa. Ao final o programa deverá emitir o seguinte relatório:

Quantidade de mouses: 100

Situação                                Quantidade      Percentual
- necessita esfera;                         40              40%
- necessita limpeza;                        30              30%
- necessita troca do cabo ou conector;      15              15%
- quebrado ou inutilizado.                  15              15%
*/

#include <stdio.h>

int main(){
	//variáveis
	int contador_total = 0, contador_sit1 = 0, contador_sit2 = 0, contador_sit3 = 0, contador_sit4 = 0, identificacao, defeito;

	//entrada1
	printf("Informe a identificação: ");
	scanf("%d", &identificacao);

	while(identificacao != 0){
		printf("1 - Necessita de esfera.\n");
		printf("2 - Necessita de limpeza.\n");
		printf("3 - Necessita de troca do cabo ou conector.\n");
		printf("4 - Quebrado ou inutilizado. \n");
		printf("Informe o tipo de defeito: \n");
		scanf("%d", &defeito);

		//processamento
		if(defeito == 1){
			contador_sit1 = contador_sit1 + 1;
		}
		if(defeito == 2){
			contador_sit2 = contador_sit2 + 1;
		}
		if(defeito == 3){
			contador_sit3 = contador_sit3 + 1;
		}
		if(defeito == 4){
			contador_sit4 = contador_sit4 + 1;
		}
		contador_total = contador_total + 1;
		//entrada2
		printf("Informe a Identificação: ");
		scanf("%d", &identificacao);
	}
	float p1, p2, p3, p4; //(float) cast. faz com q o programa utilize a variavel inteira como float, para ser mais preciso
	p1 = ((float)contador_sit1 / (float)contador_total * 100.0);
	p2 = ((float)contador_sit2 / (float)contador_total * 100.0);
	p3 = ((float)contador_sit3 / (float)contador_total * 100.0);
	p4 = ((float)contador_sit4 / (float)contador_total * 100.0);

	printf("Quantidade de Mouses %d\n\n", contador_total);
	printf("Situação \t\t\t\tQuantidade\tPercentual\n");
	printf("1-Necessita de esfera \t\t\t\t%d \t%.2f%%\n", contador_sit1, p1);
	printf("2-Necessita limpeza \t\t\t\t%d \t%.2f%%\n", contador_sit2, p2);
	printf("3-Necessita de troca do cabo ou conector \t%d \t%.2f%%\n", contador_sit3, p3);
	printf("4-Quebrado ou inutilizado \t\t\t%d \t%.2f%%\n", contador_sit4, p4);
}
