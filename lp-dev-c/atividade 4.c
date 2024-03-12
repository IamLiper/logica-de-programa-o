#include <stdio.h>
#include <locale.h>
#include <ctype.h> // Para converter em maiúsculo.

int main() {
	setlocale(LC_ALL, "");
	
	int idade, opcao, contadorSalario = 0; 
	int maiorIdd = 0, menorIdd = 0, mulheres5k = 0;
	char sexo;
	float salario, somaSalario = 0, mediaSalario;
	
	do {
	printf("\n === Menu === \n");
	printf("1 - Adicionar pessoa \n");
	printf("2 - Exibir resultados e sair \n");
	printf("Digite a opção desejada: ");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
		    printf("Digite sua idade: ");
			scanf("%i", &idade);
	
			fflush(stdin);
	
			printf("Digite o sexo (M ou F): ");
			scanf("%c", & sexo);
	
			printf("Digite o sálario: ");
			scanf("%f", &salario);
			
			sexo = toupper(sexo); // converter em maiúsculo.
			
			
			//somaSalario = somaSalario + salario;
			somaSalario += salario;
			//contadorSalario = contadorSalario + 1;
			contadorSalario++;
			
			if (idade > maiorIdd) {
				maiorIdd = idade;
			}
			
			if (idade < menorIdd)
				menorIdd = idade;
				
			if (sexo == 'F' && salario >= 5000) {
				mulheres5k++;
		}
				
		
			break;
		case 2:
			
			mediaSalario = somaSalario / contadorSalario;
			
			printf("Média do sálario do grupo: %.2f \n", mediaSalario);
			printf("Maior idade do grupo: %i \n", maiorIdd);
			printf("Menor idade do grupo: %i \n", menorIdd);
			
			break;
		default:
			printf("Opção inválida... \n");	
		}
} while (opcao != 2);
	
	
	
	
	return 0;
}
