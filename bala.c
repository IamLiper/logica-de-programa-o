#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "");
	int i;
	float nota, soma, media;
	char continua, contador = 0;
	
	for (i = 1; i <= 3; i ++) {
		do{
			printf("Digite a %iª nota: ", i);
			scanf("%f", &nota);
			
		}while (nota < 0 || nota > 10);
	
		soma = soma + nota;
		media = soma /3;
    	
	}
		printf("Média: %.1f \n", media);
    
    	if (media >= 7) {
    		printf("Aprovado! \n");
		}else if((media >= 5) || (media <= 6.9)){
			printf("Recuperação! \n");
		}else{
			printf("Reprovado! \n");
		}
    
	return 0;	
}

