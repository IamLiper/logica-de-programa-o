#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i, numero;

	printf("Digite um número: ");
	scanf("%i", &numero);
	
	printf("Tabuada de multiplicação número: %i \n", i);
	for (i = 1; i <= 10; i++) {
			printf("%i x %i = %i \n", numero, i, numero*i);
}
	return 0;
}
