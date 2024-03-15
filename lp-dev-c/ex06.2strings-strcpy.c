#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main() {
	setlocale(LC_ALL, "");
	
	char origem[N] = {"Óla, mundo!"};
	char destino[N];
	
	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino, origem);
	
	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
}
