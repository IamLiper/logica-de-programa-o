#include <stdio.h>


int main() {
	
	// Exibindo variáveis.
	int num, par, impar;
	
	// Solicitando dados para o usuário.
	printf("Digite um numero:");
	scanf("%i", &num);
	
	// determinando Par ou Impar.
	if(num %2 == 0){
		printf("Par\n");
	} else{
		printf("Impar\n");
	}
	return 0;
}
