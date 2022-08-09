/* Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome de usuário, mostrando uma mensagem de erro e voltando a 
pedir as informações.
*/

#include <stdio.h>
#include <string.h>

int main(){
	//variáveis
	char nome[100], senha[100];

	//entradas
	printf("Informe o nome: ");
	gets(nome);
	printf("Informe a senha: ");
	gets(senha);

	//processamento
	while(!strcmp(nome, senha)){
		printf("Nome de usuário e senha devem ser diferentes.\n");
		printf("Informe o nome: ");
		gets(nome);
		printf("Informe a senha: ");
		gets(senha);
	}
}
