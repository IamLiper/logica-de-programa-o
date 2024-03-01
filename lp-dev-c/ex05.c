#include <stdio.h>


int main() {
	// Exibindo variáveis.
	float salarioinfo, quantsalario, salarioMinimo = 1412.00;
	
	// Solicitando dados ao usuário.
	printf("Informe seu salario: ");
	scanf("%f", &salarioinfo);
	
	// Verificando quantidade de salario.
	quantsalario = salarioinfo / salarioMinimo;
	
	// Exibindo resultado.
	printf("Salario informado: %.1f \n", salarioinfo);
	printf("Quantidade de salario: %.1f \n", quantsalario);
	
	return 0;
}		
