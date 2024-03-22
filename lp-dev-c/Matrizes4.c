#include <stdio.h>
#include <locale.h>

#define TAM 2

int main() {
	setlocale(LC_ALL, "");
	
	char nomes[4][200];
	float notas[4][3], media[4], soma = 0;
	int i, j;
	
	for (i = 0; i < 4; i++) {
			printf("Digite o nome do %iº aluno: \n", i+1);
			scanf("%s", &nomes[i]);
			
		for(j = 0; j < 3; j++) {
			printf("Digite a %iª nota: \n", j+1);
			scanf("%f", &notas[i][j]);
	
		soma += notas[i][j];
	}
		media[i] = soma / j;
		soma = 0;
		
		printf("\n"); //Somente para pular uma linha.
}
printf("\n=== Exibindo resultados ===\n");
for(i = 0; i < 4; i++) {
	printf("\n%iª aluno: %s \n", i+1, nomes[i]);
			
	for (j = 0; j < 3; j++) {
		printf("%iª nota: %.1f \n", j+1, notas[i][j]);
	}
	printf("Media: %1.f \n", media[i]);
	
	printf("\n"); // Somente para pular uma linha.
}
	return 0;
}
