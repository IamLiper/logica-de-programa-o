#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {
	setlocale(LC_ALL, "");
	
	// Exibindo variáveis.
	char login [200], senha [200];
	char loginCadastro [200] = "lipe";
	char senhaCadastro [200] = "lipeshark";
	
	// Solicitando addos do usuário.
	printf("Digite seu login: ");
	scanf("%s", &login);
	
	fflush(stdin);
	
	printf("Digite sua senha: ");
	scanf("%s", &senha);
	
	// &&= e.
	
	// Verificando se é verdade.
	if(strcmp(login, loginCadastro) == 0 && strcmp(senha, senhaCadastro) == 0) {
		printf("Bem-vindo");
	}else {
		printf("Login ou Senha incorretos!");
	}
	return 0;
}
