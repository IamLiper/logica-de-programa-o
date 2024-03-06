#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float precoDeUmProduto(float preco) {
	float novoPreco;
	
	if (preco < 100) {
		novoPreco = preco * 1.1;
	}else {
		novoPreco = preco * 1.2;
	}
	return novoPreco;
} 

int main() {
	setlocale(LC_ALL, "");
	
	float precoProduto, resultado;
	
	printf("Digite o preço do produto: ");
	scanf("%f", &precoProduto);
	
	resultado = precoDeUmProduto(precoProduto);
	
	printf("Resultado: R$ %.1f.\n", resultado);
	
	return 0;
}
