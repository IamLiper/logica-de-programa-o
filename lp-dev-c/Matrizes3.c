#include <stdio.h>
#include <locale.h>

#define TAM 2

int main() {
	setlocale(LC_ALL, "");
	
	char nomes[2][200];
	float notas[2][3];
	int i, j;
	
	for (i = 0; i < 2; i++) {
			printf("Digite o nome do %iº aluno: \n", i+1);
			scanf("%s", &nomes[i]);
			
		for(j = 0; j < 3; j++) {
			printf("Digite a %iª nota: \n", j+1);
			scanf("%f", &notas[i][j]);
	}
	
	printf("\n"); //Somente para pular uma linha.

}

printf("\n=== Exibindo resultados ===\n");
for(i = 0; i < 2; i++) {
	printf("\n%iª aluno: %s \n", i+1, nomes[i]);
			
	for (j = 0; j < 3; j++) {
		printf("%iª nota: %.1f \n", j+1, notas[i][j]);
	}
}
	return 0;
}
