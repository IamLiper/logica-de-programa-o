#include <stdio.h>
#include <string.h>
#include <locale.h>

void cabecalho() {
	system("cls || clear"); // Limpa o terminal.
	printf("\n_____________ \n");
	printf("\n=== SENAI === \n");
	printf("\n------------- \n"); // Cabeçalho.
	fflush(stdin); // Limpa o cache de input.
}

int main() {
	setlocale (LC_ALL, "portuguese");
	
	char login [200], loginCad[200] = "Poseidon";
	char senha [200], senhaCad[200] = "lipeshark";
	
	
	cabecalho();
	printf("Digite o login: ");
	scanf("%s", &login);
	
	
	cabecalho();
	printf("Digite a senha: ");
	scanf("%s", &senha);
	
	cabecalho();
	if (strcmp(login, loginCad) == 0 && strcmp(senha, senhaCad) == 0) {
		printf("Bem vindo ao Mundo Virtual!");
	}else {
		printf("Você não é bem vindo no Mundo Virtual!");
	}
	return 0;
}
