#include <stdio.h>
#include <locale.h>

void cabecalho() {
	system("cls || clear");
	printf("\n=== World Vitual === \n");
	fflush(stdin);
}

int somar(int n1, int n2) {
	int soma;
	soma = n1 + n2;
	return soma;
}

int subtrair (int n1, int n2) {
 	int subtr;
 	subtr = n1 - n2;
 	return subtr;
}
int main() {
	setlocale(LC_ALL, "portuguese");
	
	int primeiroNumero, segundoNumero, soma, subtr;
	
	cabecalho();
	printf("Digite o primeiro número: ");
	scanf("%i", &primeiroNumero);
	
	cabecalho();
	printf("Digite o segundo número: ");
	scanf("%i", &segundoNumero);
	
	soma = somar(primeiroNumero, segundoNumero);
	subtr = subtrair(primeiroNumero, segundoNumero);
	
	printf("\nResultado da soma: %i", soma);
	printf("\nResultado da subtração: %i", subtr);
	
	return 0;
}
