#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "");
	int i;
	float nota, media, soma;
	
	for(i = 1; i <= 2; i++) {
       do {
			printf("Digite sua %iª notinha pae: ", i);
			scanf("%f", &nota);
	
		}while(nota <0 || nota >10);
	
	soma = soma + nota;
	media = soma /2;
}
	
	
	printf(" ==== Exibindo resultado === \n");
	printf("Média: %f \n", media);
	
	return 0; 
}
