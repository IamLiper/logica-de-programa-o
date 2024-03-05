#include <stdio.h>
#include <locale.h>

int somar(int n1, int n2) {
	int soma;
	soma = n1 + n2;
	return soma;
}

int subtrair(int n1, int n2) {
	int subtr;
	subtr = n1 - n2;
	return subtr;
}

int multiplicar(int n1, int n2){
	int mult;
	mult = n1 * n2;
	return mult;
}

int dividir(int n1, int n2) {
	int divis;
	divis = n1 / n2;
	return divis;
}

void cabecalho() {
	system("cls || clear");
	printf("\n=== Senai === ");
	fflush(stdin);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	// Exibindo variáveis.
	int primeiroNumero, segundoNumero, soma, subtr, mult, divis;
	
	// Solicitando dados ao usuário.
	cabecalho();
	printf("Digite o primeiro valor: ");
	scanf("%i", &primeiroNumero);
	
	cabecalho();
	printf("Digite o segundo valor: ");
	scanf("%i", &segundoNumero);
	
	soma = somar(primeiroNumero, segundoNumero);
	subtr = subtrair(primeiroNumero, segundoNumero);
	mult = multiplicar(primeiroNumero, segundoNumero);
	divis = dividir(primeiroNumero, segundoNumero);
	
	
	printf("Soma: %i \n", soma);
	printf("Subtr: %i \n", subtr);
	printf("Multiplic: %i \n", mult);
	printf("Divis: %i \n", divis);
	
	return 0;
}
