#include <stdio.h>


int main() {
	// Exibindo variáveis.
	char nome[200];
	float nota1, nota2;
	float media;
	int idade;
	
	//Solicitando dados ao usuário.
	printf("Digite seu nome:");
	scanf("%s", &nome);
	
	printf("Digite sua idade:");
	scanf("%i", &idade);
	
	fflush(stdin);
	
	printf("Digite a primeira nota:");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota:");
	scanf("%f", &nota2);
	
	//Calculando a média.
	media = (nota1 + nota2)/2;
	
	//Exibindo resultado
	printf("Resultado:\n");
	printf("Nome: %s. \n", nome);
	printf("Idade: %i. \n", idade);
	printf("Media: %.1f. \n", media);
	return 0;
}
