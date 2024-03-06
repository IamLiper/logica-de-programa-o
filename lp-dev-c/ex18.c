#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float calcularMedia(float n1, float n2) {
	return (n1 + n2) /2;
}

char* mostrarResultado(float media) {
		char resposta[200];
		
		if (media >= 7.0) {
		strcpy(resposta, "Aprovado!");
	}else {
		strcpy(resposta, "Reprovado!");
	}
}

int main() {
	setlocale(LC_ALL, "");
	
	float nota1, nota2, media;
	char resultado[200];
	
	printf("Digite a sua primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a sua segunda nota: ");
	scanf("%f", &nota2);
	
	media = calcularMedia(nota1, nota2);
	strcpy(resultado, mostrarResultado(media));
	
	printf("Média: %.2f. \n", media);
	printf("Resultado: %s \n", resultado);
	
	return 0;
}
