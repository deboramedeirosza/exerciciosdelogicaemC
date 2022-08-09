//Ler uma variável numérica n e imprimi-la somente se a mesma for maior que 100, caso contrário imprimi-la com o valor zero.

#include <stdio.h>

int main (){
	//Variável
	int n;
	//Entrada
	printf("Informe um número: ");
	scanf("%d", &n);
	//Processamento
	if(n > 100){
		//Saída1
		printf("%d", n);
	}else{
		n = 0;
		//Saída2
		printf("%d", n);
	}
}
