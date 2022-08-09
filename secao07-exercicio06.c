/* Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve informar qual número ele deseja ver
a tabuada. A saída deve ser conforme o exemplo abaixo:

Tabuada de 5:
5 X 1 = 5
5 X 2 = 10
...
5 X 10 = 50
*/

#include <stdio.h>

int main(){
	//variáveis
	int numero;

	//entrada
	printf("Informe um número entre 1 e 10: ");
	scanf("%d", &numero);

	//processamento
	while(numero < 1 || numero > 10){
		printf("Informe um número entre 1 e 10: ");
		scanf("%d", &numero);
	}
	for(int i = 1; i <= 10; i++){
		//5 x 1 = 5
		printf("%d X %d = %d\n", numero, i, (numero * i));
	}
}
