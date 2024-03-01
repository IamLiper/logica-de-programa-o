#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int opcao;
	
	printf("=== Menu ===\n");
	printf("1. Picanha: Valor R$20,00.\n");
	printf("2. Lasanha: Valor R$30,00.\n");
	printf("3. Pizza: Valor R$25,00.\n");
	printf("4. Hambúrguer: Valor R$15,00.\n\n");
	
	printf("Digite sua opcao: ");
	scanf("%i", &opcao);
	
	switch (opcao) {
		case 1:
			printf("Picanha == R$20,00");
			break;
		
		case 2:
			printf("Lasanha == R$30,00");
			break;
		
		case 3:
			printf("Pizza == R$25,00");
			break;
		
		case 4:
			printf("Hambúrguer == R$15,00");
			break;	
		
		default:
			printf("Opção inválida. ");
					
	}
	return 0;
}
