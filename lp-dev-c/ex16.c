#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int converterMetrosParaCentimetros(float metros) {
	return metros * 100;
}

int main() {
	
	float metros, resultado;
	
	printf("Digite um valor em metros: ");
	scanf("%f", &metros);
	
	resultado = converterMetrosParaCentimetros(metros);
	
	printf("Resultado: %.1f cm.\n", resultado);
	
	return 0;
}
