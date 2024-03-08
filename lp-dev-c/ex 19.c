#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



int main() {
	setlocale(LC_ALL, "");
	
	int i;
	float nota, media, soma = 0;
	
	for (i = 1; i <= 3; i ++) {
		printf("Digite a %iª nota: \n", i);
		scanf("%f", &nota);
		
		soma = soma + nota;
		media = soma / 3;
	}
		
		if (media >= 7) {
			printf("Aprovado!");
		 }else if ((media >= 5) && (media < 7)) {
			printf("Recuperação");
		  }else {
		 	printf("Reprovado!");
		 }
	return 0;
}
