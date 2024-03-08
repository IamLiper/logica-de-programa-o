#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	int contador = 0;
	char continua; // Não precisamos inicializar a variável 'continua' pois teste
	
	do {
	// Comando a serem repetidos.
	
		printf("Repetindo....\n");
		
		contador = contador + 1;
		
		printf("Tecle 's' se deseja continuar\n");
		scanf("%c", &continua);
		fflush(stdin);
			
	} while (continua == 's') ;
	
	printf("O bloco foi repetido %d vezes", contador);
	
	return 0;
}
