#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	// Exibindo variáveis.
	int primeiroNumero, segundoNumero, media;
	
	// Solicitando dados ao usuário.
	printf("Digite o primeiro valor: ");
	scanf("%i", &primeiroNumero);
	
	printf("Digite o segundo valor: ");
	scanf("%i", &segundoNumero);
	
	media = (primeiroNumero + segundoNumero)/2;
	
	printf("\n=== Resultado === \n");
	printf("\nPrimeiro valor: %i \n", primeiroNumero);
	printf("\nSegundo valor: %i \n", segundoNumero);
	printf("\nMédia: %i", media);
	
	return 0;
}
